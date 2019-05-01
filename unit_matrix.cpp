#include<stdio.h>
int main(){
  int m,n,A[10][10],i,j;
  printf("Enter the size of the matrix A :");
  scanf("%d%d",&m,&n);

  printf("Enter the elements of matrix A :");
  for(i = 0; i < m; i++){
    for(j=0; j< n; j++) {
      scanf("%d",&A[i][j]);
    }
  }

  for(i = 0; i< m; i++){
    for(j = 0; j< n;j++){
      if(i == j){
        if(A[i][j] != 1 ){
          printf("Not a diagnoal matrix \n");
          return 1;
        }
      }
      else{
        if(A[i][j] != 0){
          printf("Not a diagnoal matrix \n");
          return 1;
        }
      }
    }
  }
  printf("It is a diagnoal matix \n");


}