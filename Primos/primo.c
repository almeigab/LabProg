#include <stdio.h>
#define size 1000

int main () {
    int p[size];
    p[0] = 2;
    int num = p[0] + 1;
    int i = 1;
    while (i < size) {
        int primo = 1;
        for(int j = 0;j < i && primo; j++)
            if (num % p[j] == 0)
                primo = 0;
        if (primo) {
            p[i] = num;
            i++;
        }
        num++;
    }
    for (i = 0; i < size; i++) {
        printf("%4d\t", p[i]);
        if (((i+1)%10 == 0) && (i > 0))
            printf("\n");
    }
    printf("\n");
}