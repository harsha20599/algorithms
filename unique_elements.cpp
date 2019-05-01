#include<stdio.h>
int main(){
  int A[10][10];
  int m,n,i,j;

  printf("Enter the size of the matrix : ");
  scanf("%d%d",&m,&n);

  printf("Enter the elements of the matrix :");

  for(i =0;i<m;i++){
    for(j=0;j<n;j++){
      scanf("%d",&A[i][j]);
    }
  }

  for(i =0;i<m;i++){
    for(j=0;j<n;j++){
      scanf("%d",&A[i][j]);
      // checkInArray()
    }
  }
 
}