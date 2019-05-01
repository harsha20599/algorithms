#include<stdio.h>
int main(){
  int i,j,count=0;
  char str[100];
  printf("Enter the string :");
  gets(str);
  for(i = 0; str[i]!='\0';i++){
    if(str[i] == 'a'){
      for(j = i+1;str[j]=='b'&&str[j]!='\0';j++);
      if(str[j-1] == 'b' && str[j] == 'a'){
        count++;
      }
    }
  }
  printf("%d\n",count);
}