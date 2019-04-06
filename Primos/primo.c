#include <stdio.h>
#define size 10000

int main () {
    int p[size];
    int i = 1;
    p[0] = 1;
    int num = p[0] + 1;
    while (i < size) {
        int primo = 1;
        for(int j = 1;j < i && primo; j++)
            if (num % p[j] == 0)
                primo = 0;
        if (primo) {
            p[i] = num;
            num = p[i] + 1;
            i++;
        } else num++;
    }
    for (i = 0; i < size; i++) {
        printf("%4d\t", p[i]);
        if (((i+1)%10 == 0) && (i > 0))
            printf("\n");
    }
    printf("\n");
}