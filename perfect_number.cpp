#include<stdio.h>
int factorial(int n){
  if( n == 1 ){
    return 1;
  }
  else{
    return n * factorial(n-1);
  }
}
int perfectNumber(int n){
  int digit,sum = 0;
  while( n > 0 ){
    digit = n % 10;
    sum = sum + factorial(digit);
    n/=10;
  }
  return sum;
}
int main(){
  int n;
  printf("Enter a number to check for perfect number :");
  scanf("%d",&n);
  if(perfectNumber(n) == n){
    printf("It is a perfect number \n");
  }
  else{
    printf("It is NOT a perfect number \n");
  }
}