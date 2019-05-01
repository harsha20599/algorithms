#include<iostream>
using namespace std;
int main(){
  int numbers[100],firstLargest,secondLargest,range,temp;
  cout<<"Enter the number of elements :";
  cin >> range;
  cout<<"Enter the elements :";
  
  for(int i=0; i<range; i++){
    cin>>numbers[i];
    if(i == 0){
      firstLargest = numbers[i];
      secondLargest = numbers[i];
    }
    if(numbers[i] > firstLargest) {
      secondLargest = firstLargest;
      firstLargest = numbers[i];  
    }
    else  if(numbers[i] > secondLargest && numbers[i] != firstLargest) {
      secondLargest = numbers[i];  
    } 
  }

  cout<<"The second largest is :"<<secondLargest<<endl;


}