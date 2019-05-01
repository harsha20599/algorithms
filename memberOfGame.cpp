#include<iostream>
using namespace std;

int squareOfDigits(int num){
  int digit,squareSum=0;
  while(num>0){
    digit = num%10;
    squareSum =  squareSum + (digit*digit);
    num/=10;
  }
  return squareSum;
}

int getSingleDigitValue(int n){
    cout<<"Inside loop : "<<n<<endl;
  if(n > 9){
    n = squareOfDigits(n);
    return getSingleDigitValue(n);    
  }else{
    return n;
  }
}

int main(){
  int n;
  cin>>n;
  // while(n > 9){
  //   n = squareOfDigits(n);
  // }

  n = getSingleDigitValue(n);

  cout<<n<<endl;
  if(n==1)cout<<"Number of game\n";else cout<<"Not a number of game\n";

}