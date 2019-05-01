#include<stdio.h>
int main(){
	int i=1,n;
	scanf("%d",&n);
	while(i<=n){
		printf("%d\t%d\n",i,n+1-i );
		i++;
	}
}