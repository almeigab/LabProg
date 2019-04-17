#include <stdio.h>
int main(void)
{
	int c;
	long e = 0;
	long t = 0;
	long n = 0;
	while((c = getchar())!= EOF) {
		if (c == '\n') {
			n++;
		}
		if (c == '\t') {
			t++;
		}
		if (c == ' ') {
			e++;
		}
	}
	printf("\nespaço %ld\n",e);
	printf("tab %ld\n",t); 
	printf("enter %ld\n",n);
	return 0;
}


