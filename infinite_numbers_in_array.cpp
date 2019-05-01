#include<stdio.h>
#include<stdlib.h>
int main(){
  int *p;
  int i,n,k=0;
  printf("Enter the number of elements to be stored in the array :");
  scanf("%d",&n);
  p = (int *) malloc(n * sizeof(int));
  for(i=0; i< n; i++){
    *(p+i) = k;
    k++;
  }
  for(i=0;i<n;i++){
    printf("%d\n",*(p+i));
  }
  free(p);
}