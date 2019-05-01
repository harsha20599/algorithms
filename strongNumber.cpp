#include<iostream>
using namespace std;
int factorial(int n){
  if( n <= 1){
    return  1;
  }else{ 
    return n*factorial(n-1);
  }
}
int getSumOfFactorial(int n){
  int digit,res=0;
  while(n > 0){
    digit = n%10;
    res = res + factorial(digit);
    n/=10;
  }
  return res;
}
int main(){
  int number;
  cout<<"Enter a number :";
  cin>>number;
  if(number == getSumOfFactorial(number)){
    cout<<"Strong number";
  }else{
    cout<<"Not a strong number";
  }
}