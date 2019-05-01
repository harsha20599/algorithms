#include<stdio.h>
#include<stdlib.h>
int main(){
  int *p;
  int i,k=0;
  p = (int *) malloc(6 * sizeof(int));
  for(i=0; i< 5; i++){
    *(p+i) = k;
    k++;
  }
  for(i=0;i<5;i++){
    printf("%d\n",*(p+i));
  }
  free(p);
}