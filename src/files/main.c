#include <stdio.h>

#define SUCCESS 0

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
    fseek( fp, cursorPos, SEEK_SET ); /* SEEK_SET = beginning of file */

    return(SUCCESS);
}
