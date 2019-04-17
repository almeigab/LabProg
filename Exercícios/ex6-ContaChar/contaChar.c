#include <stdio.h>

//int main(void)
//{
	//int c;
	//c = getchar();
	//while(c != EOF) {
		//"No linux, para terminar o programa, basta digitar Ctrl+D, que significa EOL. No Windows, Ctrl+Z"
		//putchar(c);
		//c = getchar();
	//}
	//return 0;
//}

int main(void)
{
	long nc = 0;
	while((getchar())!= EOF)
		++nc;
	printf("%ld\n",nc);
	return 0;
}


