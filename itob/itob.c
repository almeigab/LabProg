#include <stdio.h>
#include <ctype.h>

int itob(int n, char s[], int b);

int main ()
{
    int n = 250;
    char s[100];
    int b = 23; 
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

    //inicializa o primeiro resto como o próprio número
    int resto = n;

    //retorna erro para bases inválidas
    if (b < 2 || b > 36)
		return -1;

    //calcula os restos das divisões dos restos anteriores pela base
    int i = 0;
    while(n >= b) {
        resto = n%b;
        n = n/b;
        if(resto >= 0 && resto <= 9)
            s[i++] = resto + '0';
        else if (resto > 9)
            s[i++] = resto - 10 + 'A';
    }

    //calcula o último quociente
    if(n >= 0 && n <= 9)
        s[i] = n + '0';
    else if (n > 9)
        s[i] = n - 10 + 'A';
    
    //adiciona o sinal
    if(sign == -1)
        s[++i]='-';
    
    //finaliza a string
    s[++i]='\0';

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
