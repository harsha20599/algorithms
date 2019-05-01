#include<iostream>
using namespace std;

int main(){
  int primes[100],limit,factors,end=0,key,count=0,sum;
  cout<<"Enter the range of prime numbers to be considered : ";
  cin>>limit;

  for(int i =2; i<=limit;i++){
    factors =  0;
    for(int j = 2;j<i;j++){
      if(i%j == 0){
        factors++;
      }
    }
    if(factors == 0){
      primes[end] = i;
      end++;
    }
  }
  // for(int i=0;i<end;i++)cout<<primes[i]<<endl;
  for(int i=1; i<end;i++){
    key = primes[i];
    sum = 0;
    for(int j=0;j<end;j++){
      sum = sum+primes[j];
      if(sum == key){
        count++;
        // cout<<primes[i]<<endl;
        break;
      }
    }
  }
  cout<<"No of consecutive primes are : "<<count<<endl;

}