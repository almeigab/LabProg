#include <stdio.h>
#include <ctype.h>

int itob(int n, char s[], int b);

int main ()
{
    int n = 53810;
    char s[100];
    int b = 36; 
    int res = itob(n,s,b);
    if (!res)
		printf("%s\n",s);
    else
		printf("Base inválida!\n");
    return 0;
}

int itob (int n, char s[], int b)
{
    //calcula o sinal
    int sign = n < 0 ? -1 : 1;
    
    //calcula o valor absoluto do número  
    n = sign * n;

    //retorna erro para bases inválidas
    if (b < 2 || b > 36)
		return -1;

    //calcula os restos iterativamente
    int resto;
    int i = 0;
    while(n > 0) {
        resto = n%b;
        n /= b;
        if(resto >= 0 && resto <= 9)
            s[i++] = resto + '0';
        else
            s[i++] = resto - 10 + 'A';
    }
    
    //adiciona o sinal
    if(sign == -1)
        s[i++]='-';
    
    //finaliza a string
    s[i]='\0';

    //inverte a string
    int length = i;
    char c;
    for(i = 0; i < length/2; i++) {
        c = s[i];
        s[i] = s[length-i-1];
        s[length-i-1] = c;
    }
    return 0;
}
