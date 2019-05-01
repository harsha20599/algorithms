#include<stdio.h>
int main(){
	int i=1,n,perfectSum=0;
	printf("Enter the number to find whether it is perfect number or not :\n");
	scanf("%d",&n);

	for(i=1;i<n;i++){
		if(n%i == 0){
			perfectSum += i;
		}
	}
	if(perfectSum == n){
		printf("%d is a perfect number\n",n );
	}
	else{
		printf("%d is NOT a perfect number\n",n );
	}
	
}