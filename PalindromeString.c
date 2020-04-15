    #include<stdio.h>
    #include<string.h>

    int main()
    {
        char a[100];
       
        scanf("%s",a);
        int len = strlen(a)-1;
      

        for (int i = 0; i <strlen(a); i++) {
            if (len == 0) {
                break;
            }
            if (a[i] == a[len]) {
                len--;
               
              
            }
            
            else {
                printf("NO\n");
                return 0;
            }
            
        }
        printf("YES");
        return 0;
    }
