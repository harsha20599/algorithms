#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    int n,i,result,curr;
    int *a;
    int testCases;
    cin>>testCases;
    while(testCases>0){   
        cin>>n;
        a = (int *) malloc(n * sizeof(int));
        cin>>a[0];
        result = a[0];
        curr = a[0];
        for(i=1;i<n;i++){
            cin>>a[i];
            curr = max(a[i],curr+a[i]);
            result = max(result,curr);
        }
        cout<<result<<endl;
        testCases--;        
    }
	return 0;
}