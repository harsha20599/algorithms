#include<stdio.h>
int main(){
	int i=1;
	int n=12;
	while(i<n){
		// (i%2==0)?printf("%d\n",i++ ):i++;
		printf("%d\n",i+=2);
	}
}