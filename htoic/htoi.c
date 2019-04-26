#include <stdio.h>
#include <ctype.h>

int htoi(char str[]);

int main ()
{
    char str[] = "0Xfa";
    int res = htoi(str); 
    printf("%d",res);
    return 0;
}

int htoi(char str[])
{
    int i = 0;
    int num = 0;
    for(i = 0; str[i] != '\0'; i++) {
        if((i == 0) && (str[i] == '0') && (toupper(str[i+1]) == 'X')) {
            i++;
            continue;
        }
        else if ((str[i] >= '0') && (str[i] <= '9'))
            num = num * 16 + (str[i] - '0');
        else if ((toupper(str[i]) >= 'A') && (toupper(str[i]) <= 'F'))
            num = num * 16 + (toupper(str[i]) - 'A') + 10;
        else
            return -1;
    }
    return num;
}