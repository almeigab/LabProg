#include <stdio.h>

int main()
{
	int fahr, celsius;
	int inicio, fim, incr;
	
	inicio = 0;
	fim = 300;
	incr = 20;
	
	fahr = inicio;
	while (fahr <= fim) {
		//celsius = (5  / 9.0) * (fahr - 32);
		celsius = 5  * (fahr - 32) / 9;
		printf("%d\t%d\n", fahr, celsius);
		fahr = fahr + incr;
	}
	return 0;
}
