    #include<stdio.h>
    #include<string.h>

    int main()
    {
        int a[10000],count;
		unsigned long long int answer=1;
        scanf("%d", &count);
        for (int i = 0; i < count; i++) {
            scanf("%d", &a[i]);
        }
        for (int i = 0; i < count; i++) {
            answer = (answer * a[i]) % (1000000000 + 7);
        }
        printf("%llu", answer);
        return 0;
    }
