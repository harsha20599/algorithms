#include<stdio.h>
int findKaprekar(int n){
  int i = 1,temp1,temp2,k;
  k = n;
  n = n*n;
  while(i<n){
    i = i*10;
    temp1 = n/i;
    temp2 = n%i;
    if(temp1 + temp2 == k){
      return 1;
    }
  }
  return 0;
}
int main(){
  int n;
  printf("Enter a number to check for kaprekar :");
  scanf("%d",&n);
  if(findKaprekar(n)){
    printf("YES\n");
  }else{
    printf("NO\n");
  }
}