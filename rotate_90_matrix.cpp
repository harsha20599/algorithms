#include<stdio.h>
int main(){
  int m,n,A[10][10],i,j,B[10][10];
  printf("Enter the size of the matrix A :");
  scanf("%d%d",&m,&n);

  printf("Enter the elements of matrix A :");
  for(i = 0; i < m; i++){
    for(j=0; j< n; j++) {
      scanf("%d",&A[i][j]);
    }
  }

  for(i=0;i<m;i++){
    for(j=0;j<n;j++){
      B[i][j] = A[j][n-i-1];
    }
  }

  for(i = 0; i < m; i++){
    for(j=0; j< n; j++) {
      printf("%d\t",B[i][j]);
    }
    printf("\n");
  }



}