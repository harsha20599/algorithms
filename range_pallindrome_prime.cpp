#include<stdio.h>
int isPrime(int n){
  for(int i = 2 ; i <= n/2 ; i++  )
    if(n%i == 0)
      return 0;
  return 1;
}
int isPallindrome(int n){
  int temp = n,res=0;
  while(n > 0){
    res = res*10 + n%10;
    n/=10;
  }
  if(res == temp)
    return 1;
  else
    return 0;
  
}
int main(){
  int start, end;
  printf("Enter the starting range : ");
  scanf("%d",&start);
  
  printf("Enter the end of range : ");
  scanf("%d",&end);
  for(;start<=end;start++ ){
    if(isPallindrome(start) && isPrime(start)){
      printf("%d\t",start);
    }
  }
  printf("\n");

}