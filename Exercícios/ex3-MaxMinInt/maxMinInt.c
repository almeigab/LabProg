#include <stdio.h>

int main()
{
	unsigned int num = 1;
	unsigned int num_ant = 0;

	while ( num > 0)
	{
		num_ant = num;
		num++;
	}

	printf("%u\n", num);
	printf("%u\n", num_ant);
	return 0;
}

/*int main()
{
	int num = 0;
	int num_ant = 0;

	while ( num >= 0)
	{
		num_ant = num;
		num++;
	}


	printf("%d\n", num);
	printf("%d\n", num_ant);
	return 0;
}*/
