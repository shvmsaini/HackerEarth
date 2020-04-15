#include<stdio.h>
#include<string.h>

int main()
{
    char a[10000],b[10000];
    int tcase,count, i,k, j,alen,blen;
    scanf("%d", &tcase);
    for ( k = 0; k < tcase; k++) {
        count = 0;
        scanf("%s", a);
        scanf("%s", b);
        alen = strlen(a);
        blen = strlen(b);
       
        for (i = 0; i < alen; i++) {
                for (j = 0;j < blen; j++) {
                    if (a[i] == b[j]) {
                        b[j]=' ';
                        count++;
                        break;
                    }
                }
        }
        printf("%d\n", (alen+blen - (2*count)));
    }

    return 0;
}
