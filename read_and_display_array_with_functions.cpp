#include<stdio.h>
void display(int *p, int n){
  int i;
  for(i = 0;i < n; i++){
    printf("%d\n",*(p+i));
  }
}
int main(){
  int i,a[20],n;
  printf("Enter the number of elements in the array :");
  scanf("%d",&n);
  printf("Enter the elements :");
  for(i = 0; i<n;i++){
    scanf("%d",a+i);
  }
  display(a,n);
}