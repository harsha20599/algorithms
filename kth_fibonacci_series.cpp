#include<iostream>
using namespace std;
int kthFibonacciSeries(int location, int series){

  int arr[100],sum=0;
  for(int i=0; i < series; i++){
    arr[i] = 1;
  }
  for(int i=series; i<location;i++){
    sum = 0;
    for(int j = i,count=0; count<=series;j--,count++){
      sum = sum+arr[j];
    }
    arr[i] = sum;
  }
  
  return arr[location-1];
}
int main(){
  int location,series;
  cout<<"Enter the position :";
  cin>>location;
  cout<<"Enter the nth position of series to start from :";
  cin>>series;
  cout<<"Kth fibonacci is "<<kthFibonacciSeries(location,series)<<endl;
}