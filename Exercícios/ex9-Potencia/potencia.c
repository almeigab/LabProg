#include <stdio.h>

int pot (int m, int n);

/* testa funcao pot*/
int main(void)
{
	int i;
	
	for (i = 0; i < 10; ++i)
		printf("%d %d %d\n", i, pot(2,i), pot(-3,i));
	return 0;
}

/* pot: eleva à enésima potencia */
/* int pot(int base, int n)
{
	int i, p;
	
	p = 1;
	for (i = 1; i <=n; ++i)
		p = p * base;
	return p;
} */

int pot(int base, int n)
{
	int p;
	
	for (p = 1; n > 0; --n)
		p = p * base;
	return p;
}
