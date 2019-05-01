#include <stdio.h>
int main(){
	int i=1;
	int n;
	scanf("%d",&n);

	while(i<n*2){
		printf("%d\n",(i > n)?n-(i-n):i );
		i++;
	}

}