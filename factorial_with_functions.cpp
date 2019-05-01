#include<stdio.h>
int factorial(int n) {
  if(n <=1 ){
    return 1;
  }
  else{
    return n*factorial(n-1);
  }
}
int main(){
  int res,n;
  printf("Enter a number to find the factorial :");
  scanf("%d",&n);
  res = factorial(n);
  printf("The factorial is %d",res);
}
