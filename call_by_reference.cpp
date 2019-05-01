#include<stdio.h>
void addition(int *a,int *b, int *c){
  *c = *a+*b;
}
int main(){
  int a,b,c;
  int *p,*p2;
  p = &a;
  p2 = &b;
  printf("Enter two numbers to perform addition on two numbers :");

  scanf("%d%d",p,p2);

  addition(p,p2,&c);

  printf("\n The addition of two numbers are %d and %d is %d \n",a,b,c);
}