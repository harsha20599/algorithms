#include<stdio.h>
void multiplication(int m, int p, int n, int A[][10], int B[][10], int C[][10]){
  for(int i=0;i<m;i++){
    for(int j=0;j<p;j++){

      C[i][j] = 0;
      for(int k=0;k<n;k++){
        C[i][j] = C[i][j] + (A[i][k] * B[k][j]);
      }

    }
  }

}
int main(){
  int m,n,o,p,i,j,k;
  int A[10][10],B[10][10],C[10][10];
  printf("Enter the size of the matrix A :");
  scanf("%d%d",&m,&n);
  printf("Enter the size of the matrix B :");
  scanf("%d%d",&o,&p);

  if(n != o) {
    printf("Sorry, you cannot multiplication these matrices due to different sizes\n");
    return 1;
  }

  printf("Enter the elements of matrix A :");
  for(i = 0; i < m; i++){
    for(j=0; j< n; j++) {
      scanf("%d",&A[i][j]);
    }
  }
  printf("Enter the elements of matrix B :");
  for(i=0;i<n;i++){
    for(j=0;j<p;j++){
      scanf("%d",&B[i][j]);
    }
  }

  multiplication(m,p,n,A,B,C);
  
  printf("The multiplied matrix is :");
  for(i=0;i<m;i++){
    for(j=0;j<p;j++){
      printf("%d\t",C[i][j]);
    }
    printf("\n");
  }

}