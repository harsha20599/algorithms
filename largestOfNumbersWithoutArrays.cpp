#include<iostream>
using namespace std;
int getNumber(){
  int n;
  scanf("%d",&n);
  return n;
}
int main(){
  int n,i=0,largest,element;
  cout<<"Enter the number of elements :";
  cin>>n;
  cout<<"Enter the elements";
  cin>>element;
  largest = element;
  while(i++ < n-1){
    element = getNumber();
    if(element > largest) largest = element;
  }
  cout<<"The largest number is "<<largest<<endl;

}