#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 1000000

void shell (int v[], int n);
void bubble (int v[], int n);

int main() {
	
	clock_t Ticks[2];

	int vetor[N];
	int i;
	
	/* printf("[");
	for(i = 0; i < N; i++) {
		vetor[i] = N-i;
		printf("%d",vetor[i]);
		if (i < N-1)
			printf(",");
	}
	printf("]\n"); */
	
	//printf("[");
	srandom(time(NULL));
	for(i = 0; i < N; i++) {
		vetor[i] = random()%(N*10);
		//printf("%d",vetor[i]);
		//if (i < N-1)
		//	printf(",");
	}
	//printf("]\n");
	
	Ticks[0] = clock();
	
	bubble(vetor,N);
	//shell(vetor,N);
	
	Ticks[1] = clock();
	
	/* printf("[");
	for(i = 0; i < N; i++) {
		printf("%d",vetor[i]);
		if (i < N-1)
			printf(",");
	}
	
	printf("]\n"); */
	double Tempo = (Ticks[1] - Ticks[0]) * 1000.0 / CLOCKS_PER_SEC;
	printf("Tempo gasto: %g ms. \n", Tempo);
	return 0;
};

//ordena em ordem crescente
void shell (int v[], int n) {
	int inter, i, j, temp;
	for (inter = n/2; inter > 0; inter/=2)
		for (i = inter; i < n; i++)
			for (j = i-inter; j>=0 && v[j]>v[j+inter]; j-=inter) {
				temp = v[j];
				v[j] = v[j+inter];
				v[j+inter] = temp;
			}
}

void bubble (int v[], int n) {
	int i, troca, temp;
	troca = 1;
	while (troca == 1)
	{
		troca = 0;
		for (i = 0; i < n-1; i++)
			if (v[i] > v[i+1]) {
				temp = v[i];
				v[i] = v[i+1];
				v[i+1] = temp;
				troca = 1;
			}
	}
}
