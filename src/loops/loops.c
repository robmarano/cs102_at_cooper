#include <stdio.h>

int main() {
    int limit = 128;
    int cnt;

    for (cnt = 0; cnt < limit; cnt++) {
        printf("cnt = %d\n", cnt);
        if (cnt % 2) {
            printf("%d is ODD\n", cnt);
            continue;
        }
        printf("%d is EVEN\n", cnt);
        int newval = cnt/4;
        printf("%d\n",newval);
        if (cnt == limit/2)
            break;
    }
}
