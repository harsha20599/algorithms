#include<stdio.h>
int main(){
  int i,len,k=0,l,found=0;
  char str[100],res[100];
  printf("Enter the string");
  gets(str);
  res[0]= '\0';
  for(len=0;str[len] != '\0'; len++);
  for(i=len; i>=0;i--, found = 0){
    for(l=0;l<=k;l++){
      if(res[l] == str[i]){
        found = 1;
        break;
      }
    }
    if(found == 0 && str[i] != ' '){
      res[k] = str[i];
      k++;
    }
  }
  res[k] = '\0';
  printf("%s\n",res);

}