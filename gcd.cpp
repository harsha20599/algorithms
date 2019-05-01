#include<stdio.h>
int gcd(int a,int b){
  if(a%b == 0){
    return b;
  }else
  {
    return gcd(b, a%b);
  }
}
int main(){
  int x,y;
  printf("Enter the two numbers to find the gcd of two numbers :");
  scanf("%d%d",&x,&y);
  printf("\nThe gcd of %d and %d is %d\n",x,y,(x>y) ?gcd(y,x): gcd(x,y));
}