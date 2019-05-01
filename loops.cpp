#include <stdio.h>
int main(){
	// int k,i;
	// int odd = 0;
	// scanf("%d",&k);
	// for(i = 1;	i<k/2+1;	i++){
	// 	if(((2*i)+1) == k){
	// 		odd = 1;
	// 		break;
	// 	}
	// }
	// if(odd ==1) {
	// 	printf("It is  a odd number\n");
	// }
	// else {
	// 	printf("It is a even number\n");
	// }


	int k;
	scanf("%d",&k);

	if((k/2)*2 == k)
	{
		printf("Even\n");
	}else{
		printf("Odd\n");
	}
}