#include<stdio.h>
int main(){
  int m,n,o,p,i,j,k,x,A[10][10];
  printf("Enter the size of the matrix A :");
  scanf("%d%d",&m,&n);
  printf("Enter the elements of matrix A :");
  for(i = 0; i < m; i++)
  for(j=0; j< n; j++) 
  scanf("%d",&A[i][j]);
    
  for(int i=0;i<m;i++)
    for(int j=0;j<n;j++){
      x = 0;
      for(int k=0;k<n;k++){
        x = x + (A[i][k] * A[k][j]);
      }
      if(x != A[i][j]) return printf("The given matrix is not an idempotent matrix\n");
    }
  printf("The matrix is a idempotent matrix\n");

}