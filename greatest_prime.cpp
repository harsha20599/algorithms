#include<stdio.h>
int isPrime(int n){
  int i;
  for(i = 2 ; i < n/2; i++){
    if(n%i == 0){
      return 0;
    }
  }
  return 1;
}
int getGreatestPrime(int n){
  int i;
  for(i = ((n/2)%2 == 0) ? n/2-1 : n/2 ; i>=3 ; i-=2 ){
    if(n%i == 0){
      if(isPrime(i)){
        return i;
      }
    }
  }
  return 1;
}
int main(){
  int n;
  printf("Enter a number to find the greatest prime factor :");
  scanf("%d",&n);
  printf("The greatest prime factor is %d \n",getGreatestPrime(n));
}