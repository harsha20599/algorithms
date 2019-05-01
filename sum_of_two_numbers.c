#include<stdio.h>
int sum(int a, int b){
  return a+b;
}
int main(){
  int a,b,result;
  printf("Enter the two numbers :");
  scanf("%d%d",&a,&b);
  result = sum(a,b);
  printf("The sum of %d and %d is %d",a,b,result);
}