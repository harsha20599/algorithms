#include<stdio.h>
int getLeastPrimeFactor(int n){
  int i;
  if(n%2 == 0){
    return 2;
  }
  for(i = 3; i < n/2 && i < 20 ; i+=2 ){
    if( n%i == 0 ){
      return i;
    }
  }
  return n;
}
int main(){
  int n;
  printf("Enter a number to find the least prime factor :");
  scanf("%d",&n);
  printf("The least prime factor is %d \n",getLeastPrimeFactor(n));
}