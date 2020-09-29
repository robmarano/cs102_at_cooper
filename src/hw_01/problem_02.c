#include <stdio.h>

int main() {
    int limit = 3;
    int cnt = 254;

    printf("cnt now = %d\n", ++cnt);
    printf("cnt now = %d\n", cnt++);
    printf("cnt now = %d\n", --cnt);
    
    for (cnt=0; cnt < limit; cnt++) {
        printf("Do unto others as you would have them do to you.\n");
    }

    return(0);
}
