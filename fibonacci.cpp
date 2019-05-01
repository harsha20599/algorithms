#include<iostream>
using namespace std;
int main()
{
	int a=0,b=1,i=1,n,next;

	cout<<"Enter the number of terms :";
	cin >>n;
	if(n>0)
	cout<<"0\t";
	if(n>1)
	cout<<"1\t";
	for(;i<=n-2;i++){
		next = a+b;
		cout<<next<<"\t";
		a = b;
		b = next;
	}


	return 0;
}