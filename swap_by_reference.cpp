#include<stdio.h>
void swap(int *a,int *b){
  int *temp;
  int k;
  temp = &k;
  *temp = *a;
  *a = *b;
  *b = *temp;
}
int main(){
  int a,b;
  printf("Enter the two numbers to swap");
  scanf("%d%d",&a,&b);
  swap(&a,&b);
  printf("\nPost swapping results ar %d and %d\n",a,b);
}