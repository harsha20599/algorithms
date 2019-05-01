#include<stdio.h>
int main(){
  int size,rowSum,colSum,i,j,leftDiagSum,rightDiagSum;
  int matrix[10][10];
  printf("Enter the size of matrix :");
  scanf("%d",&size);
  printf("Enter the elements of the matrix :");
  for(i = 0; i< size; i++){
    for(j = 0 ; j<size ; j++){
      scanf("%d",&matrix[i][j]);
    }
  }

  // have to sum up the rows and cols 
  leftDiagSum = 0;
  rightDiagSum = 0;
  for(i=0;i<size;i++){
    rowSum = 0;
    colSum = 0;
    leftDiagSum = leftDiagSum + matrix[i][i];
    rightDiagSum = rightDiagSum + matrix[i][size-i-1];
    for(j=0;j<size;j++){
      rowSum = rowSum + matrix[i][j];
      colSum = colSum + matrix[j][i];
    }
    if(rowSum != colSum) {
      printf("Not a magic square ");
      return 1;
    }
  }
  if(leftDiagSum != rightDiagSum){
      printf("Not a magic square ");
      return 1;
  }
  printf("It is a magic square \n");

}