#include<stdio.h>
#include<stdlib.h>
int main(){
  char *name;
  name = (char *) malloc(50 * sizeof(char));
  printf("Enter a string :");
  scanf("%s",name);
  printf("\n%s\n",name);
}