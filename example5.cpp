#include<stdio.h>
int main(){
	long i=0,n,sum=0,series;
	scanf("%ld",&n);
	series = 1;
	while(i<n){
		sum+=series;
		series=(series*10) +1;
		i++;
	}
	printf("Sum is %ld\n",sum );

}