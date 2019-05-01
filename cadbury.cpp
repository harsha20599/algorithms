#include<stdio.h>
int getNoOfSquares(int i,int j){
    if(i<j){
        return 1+getNoOfSquares(i,j-i);
    }else if(i > j){
        return 1 + getNoOfSquares(i-j,j);
    }else{
        return 1;
    }
}
int main(int argc, char *a[])
{
	//Write code here

	int m,n,p,q,i,j,count=0;
	scanf("%d%d%d%d",&m,&n,&p,&q);
	for(i=m;i<=n;i++){
	    for(j=p;j<=q;j++){
	        count+=getNoOfSquares(i,j);
	    }
	}
	printf("%d",count);
}
