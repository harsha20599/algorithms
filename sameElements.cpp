#include<iostream>
using namespace std;
int isSame(int arr[],int range){
  int element = arr[0]; 
  int isSame= 1;
  for(int i =1 ;i <range;i++){
    if(arr[i] != element){
      isSame = 0;
      break;
    }
  }
  return isSame;
}
int main(){
  int range,arr[100];
  cout<<"Enter the number of elements :";
  cin>>range;
  cout<<"Enter the elements : ";
  for(int i=0;i<range;i++){
    cin>>arr[i];
  }
  if(isSame(arr,range) == 1){
    cout<<"All are same -- YES";
  }else {
    cout<<"All are not same -- NO";
  }
}