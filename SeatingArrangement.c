#include <stdio.h>
void SeatArrangment(int seat) {
    int rem = seat % 12;
    switch (rem) {
    case 0: {
        printf("%d WS\n", seat - 11);
        break;
    } case 1: {
        printf("%d WS\n", seat + 11);
        break;
    } case 2: {
        printf("%d MS\n", seat + 9);
        break;
    } case 3: {
        printf("%d AS\n", seat + 7);
        break;
    } case 4: {
        printf("%d AS\n", seat + 5);
        break;
    } case 5: {
        printf("%d MS\n", seat + 3);
        break;
    } case 6: {
        printf("%d WS\n", seat + 1);
        break;
    } case 7: {
        printf("%d WS\n", seat - 1);
        break;
    } case 8: {
        printf("%d MS\n", seat - 3);
        break;
    } case 9: {
        printf("%d AS\n", seat - 5);
        break;
    } case 10: {
        printf("%d AS\n", seat - 7);
        break;
    } case 11: {
        printf("%d MS\n", seat - 9);
        break;
    }
    }
   
}
int main()
{
    int testcase, a;
    scanf("%d",&testcase);
    for (int i = 0; i < testcase; i++) {
		scanf("%d",&a);
        SeatArrangment(a);
    }
    
      
    return 0;
}
