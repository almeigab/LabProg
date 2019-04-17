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
	int c;
	while((c = getchar())!= EOF) {
		putchar(c);
	}
	return 0;
}


