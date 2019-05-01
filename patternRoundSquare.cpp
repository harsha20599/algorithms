#include<iostream>
using namespace std;
int main(){
	int i,j,k,n;

	cin>>n;

	for(i=1;i<=2*n-1;i++){
		for(j=1;j<=2*n-1;j++){

			cout<<j<<' ';

		}
		cout<<endl;
	}
}

if(a>b){
	if(a>c){
		if(a>d){
			return a;
		}else{
			return d;
		}
	}
	else{
		if(c > d){
			return c;
		}else{
			return d;
		}
	}
}else{
	if(b>c){
		if(b>d){
			return b;
		}else{
			return d;
		}
	}
	else{
		if(c > d){
			return c;
		}else{
			return d;
		}
	}
}

(a>b)? (a>c)? (a>d)? a : d : (c > d)? c : d : (b>c)? (b>d)? b : d : (c > d)? c : d;
