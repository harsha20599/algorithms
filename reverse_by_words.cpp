#include<stdio.h>
void reverseByWords(char *source, char *dest){
  int i,length,k=0,l=0,j;
  char buffer[20];
  for(length = 0;source[length] != '\0';length++);
  for(i = length-1; i>=0; i--){
    if(source[i] != ' ' && i != 0){
      //push in to buffer
      buffer[k] = source[i];
      k++;
    }
    else{
      if(i == 0){
        dest[l] = source[i];
        l++;
      }
      // remove from buffer and push into dest
      for(j = k-1; j>=0;j--){
        dest[l] = buffer[j];
        l++;
      }
      dest[l] = ' ';
      l++;
      k = 0;
    }
  }
  dest[l] = '\0';
}
int main(){
  char str1[100],str2[100];
  printf("Enter the string 1 :");
  gets(str1);
  reverseByWords(str1,str2);
  printf("The reverse is : \n%s\n",str2);
}