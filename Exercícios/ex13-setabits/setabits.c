#include <stdio.h>

unsigned obtembits (unsigned x, int p, int n, unsigned y);

int main() {
	unsigned x = 0777;
	int p = 5;
	int n = 2;
	unsigned y = 0555;
	printf("%o\n", obtembits(x,p,n,y));
	return 0;
};

unsigned obtembits (unsigned x, int p, int n, unsigned y) {
	return (x & (((~0<<(p+1))) | (~(~0<<(p-n+1))))) | ((y & ~(~0<<n)) << (p-n+1));
}


/*unsigned obtembits (unsigned x, int p, int n, unsigned y) {
	y &= ~(~0<<n);
	y <<= (p-n+1);
	printf("%o\n", y);
	x &= (((~0<<(p+1))) | (~(~0<<(p-n+1))));
	printf("%o\n", x);
	return x | y;
}*/
