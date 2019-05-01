#include<iostream>
using namespace std;

int isUnique(int arr[], int range){
  int unique = 1;
  for(int i=0;i < range;i++) for(int j=0;j<range;j++)
  unique = (i!=j && arr[i] == arr[j])? 0 : unique;
  return unique;
}
int main(){
  int range,arr[100];
  cout<<"Enter the number of elements :";
  cin>>range;
  cout<<"Enter the elements : ";
  for(int i=0;i<range;i++)
  cin>>arr[i];
  (isUnique(arr,range) == 1) ?cout<<"All are unique -- YES"<<endl : cout<<"All are not unique -- NO"<<endl;
}