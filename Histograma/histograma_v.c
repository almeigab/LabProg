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
    
    int max = 0;
    for (int i = 0; i < 10; i++)
        if (max < n[i])
            max = n[i];

    for (int h = max; h > 0; h--) {
        for (int i = 0; i < 10; i++) {
            if (n[i] >= h)
                printf("*");
            else
                printf(" ");
            printf("  ");
        }
        printf("\n");
    }

    printf("1  2  3  4  5  6  7  8  9  10+\n");

  return 0;
  }