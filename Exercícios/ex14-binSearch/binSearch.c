#include <stdio.h>
#define N 10
int pesqbin (int x, int v[], int n);
void shell (int v[], int n);

int main() {
	int vetor[N];
	int i;
	
	printf("[");
	for(i = 0; i < N; i++) {
		vetor[i] = N-i;
		printf("%d",vetor[i]);
		if (i < N-1)
			printf(",");
	}
	printf("]\n");
	
	shell(vetor,N);
	
	printf("[");
	
	for(i = 0; i < N; i++) {
		printf("%d",vetor[i]);
		if (i < N-1)
			printf(",");
	}
	
	printf("]\n");
	int num = 5;
	int res = pesqbin(num,vetor,N);
	if (res == -1)
		printf("Não encontrou\n");
	else
		printf("Número %d encontrado na posição %d\n", vetor[res], res);
	return 0;
};

int pesqbin (int x, int v[], int n) {
	int inicio, fim, meio;
	inicio = 0;
	fim = n-1;
	while (inicio <= fim) {
		meio = (inicio + fim) / 2;
		if (x < v[meio])
			fim = meio - 1;
		else if (x > v[meio])
			inicio = meio + 1;
		else //encontrou
			return meio;
	}
	return -1; //não encontrou
}

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
