#include<stdio.h>
int reverseNumber(int n){
  int result=0;
  for(;n>0;n/=10)
    result = result * 10 + (n%10);
  return result;
}
int removeAdjacent(int n){
  int firstRemainder,secondRemainder,result=0;
  for(n = reverseNumber(n);n>0;n/=10){
    firstRemainder = n%10;
    secondRemainder = (n/10)%10;
    result = (secondRemainder != firstRemainder) ? result *10 + firstRemainder : result; 
  }
  return result;
}
int main(){
  int n;
  printf("Enter a number to remove the adjacent digits : ");
  scanf("%d",&n);
  printf("The removed number is %d\n",removeAdjacent(n));
}