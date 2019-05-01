//functions, address to functions
#include<stdio.h>

void swap(int* a,int* b){
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

main(){
	int a,b,temp;
	printf("Enter two numbers a and b\n");
	scanf("%d%d",&a,&b);

	swap(&a, &b);

	printf("The a and b values are : %d %d\n",a,b);
}