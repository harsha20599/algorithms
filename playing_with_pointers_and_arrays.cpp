#include<stdio.h>
int main(){
  // int a[5]= {1,2,3,4,5};
  int a,i;
  int *p,*k;
  p = &a;
  k = p;

  for(p=&a,i=0;i<10;i++){
    // san("%d\n",*p);
    *p = 1;
    p++;
  }
  for(p=&a,i=0;i<10;i++){
    printf("%d\n",*p);
    p++;
  }



}