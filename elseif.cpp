#include <stdio.h>
int main(){
	int route;
	printf("Enter route number\n");
	scanf("%d",&route);

	if(route == 1){
		printf("You chosen adb road\n");
	}else if(route == 2){
		printf("YOu chosen indrapalem road\n");
	}else if(route ==3 ){
		printf("YOu chosen train route\n");
	}
	else{
		printf("WRong choice\n");
	}


}