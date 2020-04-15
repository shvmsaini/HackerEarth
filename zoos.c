#include<stdio.h>
int main()
{
    char a[20];
    int countZ = 0, countO = 0;
    scanf("%s",a);
    for (int i = 0; a[i]!='\0'; i++) {
        if (a[i] == 'z' || a[i] == 'Z') {
            countZ++;
        }
       else {
            countO++;
        }

    }
    (countZ * 2 == countO)?  printf("Yes"):printf("No");
        return 0;


    
}
