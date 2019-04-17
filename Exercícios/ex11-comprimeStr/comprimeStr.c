#include <stdio.h>

int main() {
	char str1[] = "ABBAABAZ";
	char str2[] = "AB";
	comprime2(str1,str2);
	printf("%s\n",str1);
	return 0;
};

void comprime(char s[], int c) {
	int i, j;
	for(i = j = 0; s[i] != '\0'; i++)
		if (s[i] != c)
	    	s[j++] = s[i];
	s[j] = '\0';
}

void comprime2(char s[], char t[]) {
	int i;
	for(i = 0; t[i] != '\0'; i++)
		comprime(s,t[i]);
}
