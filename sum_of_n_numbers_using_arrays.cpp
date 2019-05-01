#include<stdlib.h>
#include<stdio.h>
void getSum(int *p, int n){
  int i, sum=0;
  printf("The elements are :\n");
  for(i = 0; i< n; i++ ){
    printf("%d\t",*(p+i));
    // printf("%d\t",A[i]);
    sum = sum + *(p+i);
  }

  printf("The sum is %d\n",sum);

}
int main(){
  int n,i,sum=0,*p;
  printf("Enter the number of elements  :");
  scanf("%d",&n);
  p = (int *) malloc(n * sizeof(int));
  for(i = 0; i< n; i++ ){
    scanf("%d",(p+i));
  }
  getSum(p,n);
}