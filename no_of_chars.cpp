#include<stdio.h>

int strlen(char ch[]){
  int i,length=0;
  for(i=0;ch[i]!='\0';i++){
    length++;
  }
  return length;
}

int main(){
  char name[100];
  printf("Enter your name : ");
  // scanf("%[^/n]",name);
  gets(name);
  printf("The name is %s and length is %d",name,strlen(name));
}