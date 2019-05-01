#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int main(){
      vector<vector<int>> arr  { 
        {10,12,3,-4},
        {11,-2,13,14},
        {21,7,3,24},
        {31,0,25,34}
      };

      int i,j,k,size,tempSum=0,actualSum=arr[0][0];
      int row = arr.size();
      int col = arr[0].size();
      cout<<"Row size  = "<<row<<endl<<"Col size = "<<col<<endl;
      for(k=0,size = row; size>k;size--,k++)
      {
          tempSum=0;
          for(i=k;i<size;i++){
              for(j=k;j<size;j++){
                  tempSum+= arr[i][j];
                  cout<<"SUM  : "<<tempSum<<" VALUE : "<<arr[i][j]<<endl;
              }
              if(tempSum > actualSum){
                  actualSum = tempSum;
              }
          }
       }
       cout<<actualSum<<endl;
  // int n;
  // scanf("%d",&n);
  //     /* write your solution here */
  //     if(n<7){
  //         if(n<=2)
  //             cout<<n<<endl;
  //         else 
  //             cout<<2<<endl;
  //     }
  //     else {
  //         if(n%7==6){
  //             cout<<"Executed";
  //             cout<<(ceil((float)n/7)*2)-1<<endl;    
  //         }
  //         else
  //             cout<<ceil((float)n/7)*2<<endl;
  //     }
}