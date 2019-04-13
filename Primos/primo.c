#include <stdio.h>
#include <time.h>
#define size 1000

int main () {
	clock_t Ticks[2];
	Ticks[0] = clock();
    int p[size];
    p[0] = 2;
    int num = p[0] + 1;
    int i = 1;
    int j = 0;
    int primo = 1;
    while (i < size) {
		primo = 1;
		for(j = 0;j < i && (p[j]*p[j]) <= num; j++)
        if (num % p[j] == 0)
        {
			primo = 0;
            break;
		}
		if (primo) {
			p[i] = num;
			i++;
		}
		num+=2;
    }
	Ticks[1] = clock();
	double Tempo = (Ticks[1] - Ticks[0]) * 1000.0 / CLOCKS_PER_SEC;
	printf("Tempo gasto: %g ms. \n", Tempo);
    // for (i = 0; i < size; i++) {
    //     printf("%4d\t", p[i]);
    //     if (((i+1)%10 == 0) && (i > 0))
    //         printf("\n");
    // }
    printf("\n");
    return 0;
}
