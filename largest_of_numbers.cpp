#include<iostream>
using namespace std;
int main(){
  int numbers[100],range,largest = 0;
  cout<<"Enter the number of elements :";
  cin>>range;
  largest = 0;
  cout<<"Enter the elements :";
  for(int i=0; i<range; i++){
    cin>>numbers[i];
    if(numbers[i] > largest) {
      largest = numbers[i];  
    }
  }
  cout<<"The largest number is "<<largest<<endl;


}