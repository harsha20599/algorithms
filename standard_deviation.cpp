#include<iostream>
#include<math.h>
using namespace std;
int main(){
  int arr[100], range,sum=0,temp;
  float mean,sigma=0,res;
  cout<<"Enter the number of elements : ";
  cin>>range;
  cout<<"Enter the elements : ";
  for(int i =0; i < range; i++){
    cin>>arr[i];
    sum = sum+arr[i];
  }
  mean = (float)sum/range;

  for( int i =0; i<range;i++){
    temp = arr[i]-mean;
    temp = temp*temp;
    sigma = sigma + temp;
  }
  res = sqrt((sigma)/range);
  cout<<"The standard deviation is : "<<res<<endl;

}