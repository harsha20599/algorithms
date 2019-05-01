#include<stdlib.h>
#include<stdio.h>
int main(){
  char *p;
  int n,i;
  printf("Enter the number of letters (including spaces) :");
  scanf("%d",&n);
  p = (char *) malloc(n * sizeof(char));
  for(i = 0; i< n ; i++){
    scanf("%c",p+i);
  }
  // *(p+n) = '\0'e;
   
  for(i = 0; i< n ; i++){
    printf("%c",*(p+i));
  }
   
}