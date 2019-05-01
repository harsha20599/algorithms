#include<iostream>
using namespace std;
int reverse(int n){
	int rev=0;
	while(n>0){
		rev= rev*10 + n%10;
		n/=10;
	}
	return rev;
}
int main(){
	int n,actualSquare,reverseSquare,reverseNumber,reverseSquareofReverse;
	cout<<"Enter the number :";
	cin>>n;

	actualSquare = n*n; // 12*12 = 144
	reverseNumber = reverse(n); // rev(12) = 21
	reverseSquare = reverseNumber*reverseNumber; // 21*21 = 441
	reverseSquareofReverse = reverse(reverseSquare); // rev(441) = 144
	if(actualSquare == reverseSquareofReverse){ //144 == 144
		cout<<"Adam number";
	}else{
		cout<<"Not an adam number";
	}

}