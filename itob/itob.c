#include <stdio.h>
#include <ctype.h>

int itob(int n, char s[], int b);

int main ()
{
    int n = 22945;
    char s[100];
    int b = 16;
    int res = itob(n,s,b);
    if (res == 0) {
		printf("%s",s);
		printf("\n");
	}
    else
		printf("Número inválido!\n");
    return 0;
}

int itob(int n, char s[], int b)
{
    int i = 0;
    int resto = n;
    
    if (b > 36)
		return -1;
    while(n >= b) {
        resto = n%b;
        n = n/b;
        if(resto >= 0 && resto <= 9)
            s[i] = resto + '0';
        else if (resto > 9)
            s[i] = resto - 10 + 'A';
        i++;
    }
    printf("%d\n",n);
    if(n >= 0 && n <= 9)
        s[i] = n + '0';
    else if (n > 9)
        s[i] = n - 10 + 'A';
    s[i+1]='\0';
    return 0;
}
