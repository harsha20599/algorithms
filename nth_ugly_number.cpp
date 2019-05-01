#include<stdio.h>
int isPrime(int n){
  for(int i = 2 ; i <= n/2 ; i++  )
    if(n%i == 0)
      return 0;
  return 1;
}
int uglyNumber(int n){
  if( n == 2 || n ==3 || n == 5)
    return 1;
  if(isPrime(n))
    return 0;
  for(int i = 7; i <= n/2 ; i+=2)
    if( n%i == 0 && isPrime(i) )
      return 0;
  return 1;
}
int main(){
  int n,count = 0,i=1;
  printf("Enter the nth term to print the ugly number : ");
  scanf("%d",&n);
  while(count != n){
    if(uglyNumber(i)){
      count++;
    }
    i++;
  }
  printf("The %dth term is %d\n",n,i-1);
}