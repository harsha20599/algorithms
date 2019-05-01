#include<stdio.h>
#include<string.h>
int strlen(char *s1){
  int i= 0;
  while(*(s1+i) != '\0'){
    i++;
  }
  return i;
}
void strcpy(char *s1, char *s2){
  int i= 0,length;
  length = strlen(s1);
  while(*(s2+i) != '\0'){
    *(s1+length) = *(s2+i);
    i++;
    length++;
  }
  *(s1+length) = '\0';
}
int main(){
  char name2[50];
  char name[50];
  printf("Enter the string 1:");
  scanf("%s",name);
  printf("Enter the string 2:");
  scanf("%s",name2);
  strcat(name,name2);
  printf("The concatenated string is %s\n",name);
}