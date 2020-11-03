#include <stdio.h>
#include <string.h>

int main(void)
{
    char *strPtr = "Hello, World!";
    int strLength = strlen(strPtr);

    printf("%s with length %d is stored at %p\n", strPtr, strLength, (void *) &strPtr);

    printf("%x %x\n", strPtr[strLength-1], strPtr[strLength]);

    return(0);
}
