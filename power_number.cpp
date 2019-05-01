#include<stdio.h>
#include<math.h>
int main(){
  int lower,higher,a,b,j,k,count=0,last=0,found=0,prev=-1;
  scanf("%d",&lower);
  scanf("%d",&higher);
  for(;lower<=higher;lower++)
    for(int a=0;a<=lower;a++)
      for(int j=2;j<=lower;j++)
        for(int b=0;b<=lower;b++)
          for(int k=2;k<=lower;k++)
            if(pow(a,j)+pow(b,k) == lower){
              if(prev != lower){
                count++;
                prev = lower;
              }
            }
  printf("%d\n",count);
}