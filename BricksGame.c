	//#include <stdio.h>
	//#include<string.h>
	//void add(int x) {
	//   
	//    if (x != 0) {
	//        printf("%d", x);
	//        add(x - 1);
	//
	//    }
	//    x == 10 ? printf("y") : printf("*");
	//   
	//}
	//int main()
	//{
	//    int a = 10;
	//    
	//    add(a);
	//    return 0;
	//}
	#include<stdio.h>

	int main() {
		int bricks;
		int round = 1;

		scanf("%d", &bricks);
		while (bricks > 0) {
			bricks -= round;
			if (bricks<= 0) {
				printf("Patlu");
				break;
			}
			bricks -= (round * 2);
			if (bricks <= 0) {
				printf("Motu");
				break;
			}
			round += 1;	
		}
	}
