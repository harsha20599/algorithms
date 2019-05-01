#include<stdio.h>
int main(){
  char name[100];
  char firstName[50],lastName[50];

  printf("Enter your name");
  scanf("%99[^\n]",name);

  // slicing the first name
  int i=0;
  while(name[i] != ' '){
    firstName[i] = name[i];
    i++;
  }
  firstName[i] = '\0';

  // slicing the last name
  i++;
  int j=0;
  while(name[i] != '\0'){
    lastName[j] = name[i];
    i++;
    j++;
  }
  lastName[j] = '\0';

  printf("First name is %s\nLast name is %s\n",firstName,lastName );


}