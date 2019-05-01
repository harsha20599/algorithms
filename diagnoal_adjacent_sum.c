#include<stdio.h>
int main(){
  int m,n,a[10][10],row,col,i,j;
  printf("Enter the first row element");
  scanf("%d",&row);
  printf("Enter the first column element :");
  scanf("%d",&col);
  printf("Enter the matrix sizes :");
  scanf("%d%d",&m,&n);
  for(i=0;i<m;i++){
    a[i][0] = col;
  }
  for(i=0;i<n;i++){
    a[0][i] = row;
  }
  a[0][0]  = 1;
  for(i=1;i<m;i++){
    for(j=1;j<n;j++){
      a[i][j] = a[i][j-1] + a[i-1][j];
    }
  }
  for(i=0;i<m;i++){
    for(j=0;j<n;j++){
      // a[i][j] = a[i][j-1] + a[i-1][j];
      printf("%d\t",a[i][j]);
    }
    printf("\n");
  }
}