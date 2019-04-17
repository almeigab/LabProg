#include <stdio.h>

int main()
{
	int fahr, celsius;
	int inicio = 0;
	int fim = 300;
	int incr = 20;
	
	//celsius = inicio;
	
	for(celsius = inicio; celsius<=fim; celsius+=incr)
	{
		fahr = (9 * celsius) / 5 + 32;
		printf("%d\t%d\n",celsius, fahr);
	}
	
	/* celsius = inicio;
	
	while ( celsius <= fim )
	{
		fahr = (9 * celsius) / 5 + 32;
		printf("%d\t%d\n",celsius, fahr);
		celsius += incr;
	} */
	return 0;
}
