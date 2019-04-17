#include <stdio.h>

int main(void)
{
	int c, nl;
	while((c =getchar())!= EOF)
		if (c == '\n')
			++nl;
	printf("%ld\n",nl);
	return 0;
}
