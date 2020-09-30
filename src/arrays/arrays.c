#include <stdio.h>
#include <string.h>

#define MATRIX_DEGREE 3

void reversi();

int areSame(int A[][MATRIX_DEGREE], int B[][MATRIX_DEGREE]);

int main() {
    int intArray[3]; /* int array declaration */

    intArray[0] = 0; /* the start of the array definition by defining each array element */
    intArray[1] = 1;
    intArray[2] = 2;

    printf("%d %d %d\n", intArray[0], intArray[1], intArray[2]);

    char charArrA[3] = { 'A', 'B', 'C' }; /* char array declaration & definition */
    char charArrB[] = "DEF";
    int arrLen = 3;
    int ii;
    for (ii=0; ii < arrLen; ii++)
    {
        printf("from charArrA = %c ; from charArrB = %c\n", charArrA[ii], charArrB[ii]);
    }
    printf("Done!\n");
    
    int len = MATRIX_DEGREE;
    int matrix1[MATRIX_DEGREE][MATRIX_DEGREE] = { {1,2,3}, {4,5,6}, {7,8,9} };
    int matrix2[MATRIX_DEGREE][MATRIX_DEGREE] = { {1,2,3}, {4,5,6}, {7,8,0} };

    int i;
    int j;

    for (i=0; i<len; i++) {
        for (j=0; j<len; j++) {
            printf("(i=%d,j=%d) = %d)\n",i, j, matrix1[i][j]);
        }
    }

    if (areSame(matrix1, matrix2)) {
        printf("Matrix 1 = Matrix 2\n");
    } else {
        printf("Matrix 1 != Matrix 2\n");
    }

    reversi();
}

int areSame(int A[][MATRIX_DEGREE], int B[][MATRIX_DEGREE]) {
    int i, j;
    for (i = 0; i < MATRIX_DEGREE; i++)
        for (j = 0; j < MATRIX_DEGREE; j++)
            if (A[i][j] != B[i][j])
                return 0;
    return 1;
}

void reversi() {
    char s[] = "CS102B";

    int c, i, j;
    for (i=0, j=strlen(s)-1; i<j; i++, j--)
    {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
    printf("%s\n", s);
}
