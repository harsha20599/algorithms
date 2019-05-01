#include<stdio.h>
#include<string.h>
int main(){
  char str[100];
  int length,i,j,same=1;
  printf("Enter the string to check for pallindrome :");
  gets(str);
  length = strlen(str);

  for(i=0,j=length-1;i<=length/2 && j>length/2;i++,j--){
    if(str[i] != str[j]){
      same=0;
    }
  }

  if(same == 0){
    printf("The string is not a pallindrome \n");
  }else{
    printf("The string is a pallindrome\n");
  }

}