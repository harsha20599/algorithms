#include<stdio.h>
int main(){
  int m,n,A[10][10],i,j,lowerSum = 0,upperSum = 0;
  printf("Enter the size of the matrix A :");
  scanf("%d%d",&m,&n);

  printf("Enter the elements of matrix A :");
  for(i = 0; i < m; i++){
    for(j=0; j< n; j++) {
      scanf("%d",&A[i][j]);
    }
  }

  for(i = 0; i< m; i++){
    for(j = 0; j< i;j++){
      lowerSum += A[i][j];
    }
    for(j=i+1; j<n;j++){
      upperSum += A[i][j];
    }
  }
  printf("The lower triangle sum of matix is %d \n",lowerSum);
  printf("The upper triangle sum of matix is %d \n",upperSum);


}