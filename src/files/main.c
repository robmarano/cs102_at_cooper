#include <stdio.h>
#include <stdlib.h>

#define SUCCESS 0
#define SIZE 24

int main(void) {
    FILE *fp;
    char *fileName = "./test_file.txt";

    /*
     * function call for opening files in C
     * FILE *fopen( const char * filename, const char * mode );
     * modes for text or binary files:
     * r = read mode, r+ = reading and writing
     * w = write mode, w+ = writing and reading.
     *   It first truncates the file to zero length if it exists, otherwise creates a file if it does not exist.
     * a = appending mode
     *   Opens a text file for both reading and writing.
     *   It creates the file if it does not exist.
     *   The reading will start from the beginning but writing can only be appended.
     * For binary files, add "b" to r, w, a. 
     * see the link for more details:
     * https://www.cplusplus.com/reference/cstdio/fopen/
     *
     */

    /* open file pointer in write mode */
/*
    fp = fopen(fileName, "w+");
    if (fp != NULL) {
        printf("Writing from fprintf...\n");
        fprintf(fp, "Writing using fprintf...\n");
        fputs("Writing using fputs...\n", fp);
        printf("Writing using fputs...\n");
        printf("Closing file handle...\n");
        fclose(fp);
        printf("Done.\n");
    }
*/
    /*
     * now let's return to the beginning of the file we wrote,
     * and read the file to print to screen
     *
     * int fseek(FILE *stream, long int offset, int whence)
     *   stream = file pointer
     *   offset = # of bytes to offset from file start
     *   whence = position from where offset is added
     *
     */
    long int cursorPos = 0;
    /* SEEK_SET = beginning of file */
   /* fseek( fp, cursorPos, SEEK_SET ); */

/*
   char buff[256];

   fp = fopen(fileName, "r");
   fscanf(fp, "%s", buff);
   printf("1 : %s\n", buff );

   fgets(buff, 256, (FILE*)fp);
   printf("2: %s\n", buff );
   
   fgets(buff, 256, (FILE*)fp);
   printf("3: %s\n", buff );
   fclose(fp);

    fp = fopen(fileName, "r");
    while (! feof(fp) ) {
        for (int i=0; i<SIZE; i++)
            buff[i] = ' ';
*/
/*        fscanf(fp, "%s", buff); */
/*        fgets(buff, 255, (FILE*)fp);
        if (feof(fp))
            break;
        printf("%s:", buff);
    }
    fclose(fp);
*/

    fp = fopen(fileName, "w+");
    if (fp != NULL) {
        fprintf(fp, "This is line 1.\n");
        fprintf(fp, "This is line 2.\n");
        fprintf(fp, "This is line 3.\n");
    }
    fclose(fp);

    char *buffer = (char *) malloc(SIZE * sizeof(char));
    fp = fopen(fileName, "r");
    if (fp != NULL) {
        do {
            fscanf(fp, "%[^\n]%*c", buffer);
            printf("%s", buffer);
        } while (!feof(fp));
        free(buffer);
        fclose(fp);
    }
    return(SUCCESS);
}

