#include<stdio.h>
int main(){
  int a[5],i,*p,*k;
  p = a;
  k = a;
  p = p +k;
  // a = a;
  for(i = 0 ;i < 5 ; i++){
    // a[i] = k;
    scanf("%d",(a+i));
    // k++;
  }
  for(i=0;i<5 ; i++){
   printf("%d\t%d\t%d\t%d\n",*(a+i),*(i+a),i[a],a[i]);
  }
  // printf("%d",(int)3.9);
}