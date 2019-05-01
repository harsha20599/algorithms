#include<stdio.h>
#include<stdlib.h>
int strcmp(char *s1, char *s2){
  int i= 0,sum=0;
  while(*(s1+i) != '\0' || *(s2+i) != '\0'){
    sum = sum + (*(s2+i) - *(s1+i)  );
    i++;
  }
  if(sum > 0){
    return -1;
  }
  else{
    return 1;
  }
  return sum;
}
int main(){
  char str1[20] = "abcdef";
  char str2[20] = "abcdefghi";
  printf("%d\n",strcmp(str1,str2));
}