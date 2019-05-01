#include<stdio.h>
int checkSumNine(int n){
  int sum=0,digit;
  if(n<10 && n == 9){
    return 1;
  }
  else if(n < 10){
    return 0;
  }
  else{
    while(n>0){
      digit = n%10;
      sum = sum+digit;
      n/=10;
    }
    return checkSumNine(sum);
  }
}
int main(){
  for(int i=0;i<10;i++){
    for(int j=0;j<10;j++){
      for(int k=0;k<10;k++){
        for(int l=0;l<10;l++){
          if(checkSumNine(i+j+k+l) == 1){
            printf("%d%d%d%d\n",i,j,k,l);
          }
        }
      }
    }
  }
}