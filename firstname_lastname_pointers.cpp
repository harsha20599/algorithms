#include<stdlib.h>
#include<stdio.h>
void strcat(char *str1, char *str2){
  int i,length;
  for(i = 0;str1[i] != '\0';i++);
  length = i;
  str1[length] = ' ';
  length++; 
  for(i=0;str2[i] != '\0';i++,length++){
    str1[length] = str2[i];
  }
  str1[length] = '\0';

}
int main(){
  char *firstName, *lastName;
  firstName = (char *)malloc(50 * sizeof(char));
  lastName = (char *)malloc(50 * sizeof(char));
  printf("Enter the firstname : ");
  gets(firstName);
  printf("Enter the last name :");
  gets(lastName);
  strcat(firstName, lastName);
  printf("The appended name is %s\n",firstName);
}