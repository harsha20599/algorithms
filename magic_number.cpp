#include<math.h>
#include<stdio.h>
int magicNumber(int n){
  if(n == 1){
    return 5;
  }
  if(n%2 == 0){
    return pow(5,(n/2+1));
  }
  else{
    return pow(5,((n-1)/2+1))+5;
  }
}
int main(){
  int n;
  printf("Enter the nth term :");d
  scanf("%d",&n);
  printf("The %d term is %d\n",n,magicNumber(n));
}