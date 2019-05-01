#include<stdio.h>
int main(){
  char name[100];
  return printf("The name is %s",name,(printf("Enter your name")) ? scanf("%s",&name) : printf("Something wrong with that"))?  1 :  0; 
}