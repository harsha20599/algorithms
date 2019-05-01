#include<stdlib.h>
#include<stdio.h>
int main(){
  int i,a[20][20],n;
  printf("Enter the number of elements in the array :");
  scanf("%d",&n);
  // a = (int *) malloc(n * sizeof(int));
  printf("Enter the elements :");
  for(i = 0; i<n;i++){
    scanf("%d",a+i);
  }
  for(i = 0;i < n; i++){
    printf("%d\n",*(a+i));
  }
}