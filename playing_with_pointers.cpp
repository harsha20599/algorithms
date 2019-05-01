#include<stdio.h>
int main(){
  int a,b;
  int *p;
  a = 10;
  p = &a;
  b =(int)&p;
  printf("\na = %d",a);
  printf("\n \%__a = %d",&a);
  printf("\np = &a");
  printf("\np = %d",p);
  printf("\n*p = %d",*p);
  printf("\n&p = %d",&p);
  printf("\nb =(int)&p");
  printf("\nb = %d",b);
  printf("\n*b = %d",()*b);

}