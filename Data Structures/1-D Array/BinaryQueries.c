//https://www.hackerearth.com/submission/42415981/
#include<stdio.h>
#include <math.h>
 
int main(){
long size;
long query;
int A[1000000];
long L,R,X,q;
 
scanf("%ld",&size);
scanf("%ld",&query);
for (int i =0; i < size; i++){
	scanf("%d",&A[i]);
}
while(query--){
	scanf("%ld",&q);
	if (q==1){
		scanf("%ld",&X);
		
			if (A[X-1]==0){
				A[X-1]=1;
			} 
			else{
				A[X-1]=0;
			}
	
		
	}
	
	else if(q==0){
		scanf("%ld %ld",&L,&R);
		
		if (A[R-1]&1) { //if the last digit in a binary number is 0 then it is even otherwise odd
				printf("ODD\n");
			}
		else {
				printf("EVEN\n");
		}
		
 
	}
}
 
}
