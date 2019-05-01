#include<stdio.h>
#include<string.h>
void strcpy(char *s1, char *s2){
  int i= 0;
  while(*(s2+i) != '\0'){
    *(s1+i) = *(s2+i);
    i++;
  }
  *(s1+i) = '\0';
}
int main(){
  char name2[50];
  char name[50];
  printf("Enter the string :");
  scanf("%s",name);
  strcpy(name2,name);
  printf("The second string is %s\n",name2);
}