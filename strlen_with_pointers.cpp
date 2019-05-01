#include<stdio.h>
#include<string.h>
int strlen(char *s1){
  int i= 0;
  while(*(s1+i) != '\0'){
    i++;
  }
  return i;
}
int main(){
  char name[50];
  printf("Enter the string :");
  scanf("%s",name);
  printf("The length of the string is %d\n",strlen(name));
}