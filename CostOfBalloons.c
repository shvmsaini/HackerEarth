#include <stdio.h>

int main()
{
    int testc;
    scanf("%d", &testc);
    while (testc != 0) {
        int a[10][2];
        int price[2];// price of ballons
        int mincost1 =0,mincost2 = 0;// minimum cost
        // initializing price of ballons 
        
        scanf("%d%d", &price[0], &price[1]);


        int party;
       
        scanf("%d", &party);// no of participants
      
        for (int i = 0; i < party; i++) {// initializing solved problems
            scanf("%d%d", &a[i][0], &a[i][1]);

        }
        for (int i = 0; i < party; i++) {// initializing solved problems
            mincost1 += (a[i][0] * price[0]) + (a[i][1] * price[1]);
            mincost2 += (a[i][0] * price[1]) + (a[i][1] * price[0]);

        }
        mincost1 > mincost2 ? printf("%d\n", mincost2 ): printf("%d\n", mincost1);
        testc--;
    }
    return 0;
}
