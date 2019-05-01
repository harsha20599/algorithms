#include<stdio.h>
int main(){
  int size,matrix[20][20],row,col;
  printf("Enter the size of the matrix :");
  scanf("%d",&size);
  printf("Enter the elements of the matrix :");

  for( row=1;row<=size;row++){
    for( col=1;col<=size;col++){
      scanf("%d",&matrix[row][col]);
    }
  }

  for( row=1;row<size;row++){
    for( col=2;col<=size;col++){
      if(matrix[row][col] != matrix[row+1][col-1]){
        printf("NO\n");
        return 1;
      }
    }
  }
  
  printf("YES \n");

}