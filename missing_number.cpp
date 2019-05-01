#include<iostream>
using namespace std;
int main(){
    int n,i,temp;
    cin>>n;
    for(i =1; i<=n;i++){
        if(i!=n)
        cin>>temp;
        if(i != temp){
            cout<<i<<endl;
            break;
        }
    }
    
    // testCases--;
}