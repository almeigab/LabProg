#include <stdio.h>

int main ()
{
	int c, nc = 0;
    int n [10];

    for (int i = 0; i < 10; i++) {
        n[i] = 0;
    }

    while ((c = getchar()) != EOF) {
		if(c==' ' || c=='\n' || c=='\t') {
            if (nc>10)
                n[9]++;
            else
                n[nc-1]++;
            nc = 0;
        }
		else {
    		++nc;
		}
	}
    
    for (int i = 0; i < 10; i++) {
        if (i<9)
            printf("%d    ", i+1);
        else
            printf("%d+  ", i+1);
        for( int j = 0; j < n[i]; j++) {
            printf("* ");
        };
        printf("\n");
    }
  return 0;
  }