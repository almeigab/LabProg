#include <stdio.h>

int posicao1(char s[], int c);
int posicao2(char s[], char t[]);

int main() {
	char str1[] = "ABBAABAZ";
	char str2[] = "C";
	printf("%d\n",posicao2(str1,str2));
	return 0;
};

int posicao1(char s[], int c) {
	int i;
	for(i = 0; s[i] != '\0'; i++)
		if (s[i] == c)
	    	return i;
	return -1;
}

int posicao2(char s[], char t[]) {
	int i;
	int pos = -1;
	for(i = 0; t[i] != '\0'; i++) {
		pos = posicao1(s,t[i]);
		if (pos != -1)
			return pos;
	}
	return pos;
}
