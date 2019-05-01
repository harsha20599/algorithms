#include<iostream>
using namespace std;
int main(){
  int range,numbers[100],isRepeated,i,j,k,temp,key;
  cout<<"Enter the number of elements :";
  cin>>range;
  cout<<"Enter the elements :";

  for(int i=0; i< range;i++){
    cin>>numbers[i];
  }

  for(i = 1; i<range;i++){
    for(j = i; j > 0; j--){
      if(numbers[j] < numbers[j-1]){
        // swap
        temp = numbers[j];
        numbers[j] = numbers[j-1];
        numbers[j-1] = temp;
      }
    }
  }

  for(i =0;i < range-1;i++){
    if(numbers[i] == numbers[i+1]){
      range=range-1;
      for(j=i;j<range;j++){
        numbers[j] = numbers[j+1];
      }
      i--;
    }
  }

  for(i = 0; i < range; i++){
    cout<<numbers[i]<<"  ";
  }
  cout<<endl;

}