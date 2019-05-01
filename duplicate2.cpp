#include<iostream>
using namespace std;
int checkRepetition(int arr[], int key, int range){
  int repeated = 0;
  for(int i=0;i < range; i++){
    if(arr[i] == key){
      repeated = 1;
      break;
    }
  }
  return repeated;
}
int main(){
  int range,numbers[100],newArray[100],i,k;
  cout<<"Enter the number of elements :";
  cin>>range;
  cout<<"Enter the elements :";

  for(int i=0; i< range;i++){
    cin>>numbers[i];
  }
  k = 0;
  for(int i = 0; i < range; i++){
    if(checkRepetition(newArray, numbers[i], k) != 1){
      newArray[k] = numbers[i];
      k++;
    }
  }
  
  for(i = 0; i < k; i++){
    cout<<newArray[i]<<"  ";
  }
  cout<<endl;


}