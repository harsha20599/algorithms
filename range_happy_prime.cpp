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
int squareOfDigits(int num){
  int digit,squareSum=0;
  while(num>0){
    digit = num%10;
    squareSum =  squareSum + (digit*digit);
    num/=10;
  }
  return squareSum;
}

int isHappy(int n){
  if(n > 9){
    n = squareOfDigits(n);
    return isHappy(n);    
  }else if(n == 1){
    return 1;
  }else{
    return 0;
  }
}

int main(){
  int start, end;
  printf("Enter the starting range : ");
  scanf("%d",&start);
  
  printf("Enter the end of range : ");
  scanf("%d",&end);
  for(;start<=end;start++ ){
    if(isHappy(start) && isPrime(start)){
      printf("%d\t",start);
    }
  }
  printf("\n");

}