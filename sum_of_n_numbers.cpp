#include<stdio.h>
int sumOfN(int n){
  return (n*(n+1))/2;
}
int main(){
  int n;
  printf("Enter the nth term :");
  scanf("%d",&n);
  printf("The %d term is %d\n",n,sumOfN(n));
}