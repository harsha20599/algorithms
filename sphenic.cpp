// sphenic number is a number which is exactly divisible by 3 prime numbers
#include<stdio.h>
int isPrime(int n){
  for(int i = 2 ; i <= n/2 ; i++  )
    if(n%i == 0)
      return 0;
  return 1;
}
int sphenicNumber(int n){
  int i,primeCount = 0,sum=1;
  for(i=2; i<=n/2; i++){
    if(n%i == 0){
      if(isPrime(i)){
        primeCount++;
        sum = sum * i;
      }
    }
  }
  if(primeCount == 3 && sum == n) {
    return 1;
  }
  else {
    return 0;
  }
}

int main(){
  int n;
  printf("Enter a number to check for sphenic number :");
  scanf("%d",&n);
  if(sphenicNumber(n)){
    printf("YES\n");
  }
  else{
    printf("NO\n");
  }

}