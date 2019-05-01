#include<iostream.h>
using namespace std;
int main(){
	int n,bin=1;
	cin>>n;
	for(;n>0;n/=2)
		bin = (n%2 ==0)?bin*10+0:bin*10+1;
	for(;bin > 1;bin/=10)
		cout<<bin%10<<"\t";
}