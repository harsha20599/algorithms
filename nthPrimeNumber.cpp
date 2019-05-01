#include<iostream>
using namespace std;

int getNthPrimeNumber(int low, int high, int n){

  int factors,primeCount=0;

  for(int i=low; i<high;i++){
    
    factors = 0;

    for(int j=2; j<i; j++){
      if(i%j == 0){
        factors++;
      }
    }
    if(factors == 0){
      primeCount++;
    }
    if(primeCount == n){
      return i;
    }
  }
}

int main(){
  int initialRange,finalRange,nthPosition;
  cout<<"Enter the starting range :";
  cin>>initialRange;
  cout<<"Enter the final range :";
  cin>>finalRange;
  cout<<"Enter the nth position :";
  cin>>nthPosition; 

  cout<<"The nth prime number is "<<getNthPrimeNumber(initialRange,finalRange,nthPosition)<<endl;

}