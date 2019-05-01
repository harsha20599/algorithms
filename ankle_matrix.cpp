#include<stdio.h>
int main(){
  int m,n,A[10][10],i,j,l,a,b,x,isSame = 1;
  printf("Enter the size of the matrix A :");
  scanf("%d%d",&m,&n);

  printf("Enter the elements of matrix A :");
  for(i = 0; i < m; i++){
    for(j=0; j< n; j++) {
      scanf("%d",&A[i][j]);
    }
  }


  for(i=0,j=0,l=0; l<2*m-3; l++){
    if(i<n-1) 
      i++;
    else
      j++;
    x = A[i][j];
    for(a=i,b=j; a>=j ;a--,b++){
      if(x != A[a][b]){
        isSame = 0;
      }
    }
  }
  if(isSame == 1){
    printf("It is a ankle matrix\n");
  }
  else{
    printf("It is not a ankle matrix\n");
  }

}