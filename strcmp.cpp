#include<stdio.h>
// #include<string.h>

int strcmp(char str1[],char str2[]){
  int sum=0,i;
  for(i=0; (str1[i] != '\0') && (str2[i] != '\0') ;i++){
    sum = sum + (str1[i] - str2[i]);
  }
  return sum;
}


int main(){
  char name[100],name2[100];

  printf("Enter your name :");
  gets(name);
  printf("Enter second name :");
  gets(name2);
  printf("The value of strcmp(%s,%s) is %d\n",name,name2,strcmp(name,name2));
}