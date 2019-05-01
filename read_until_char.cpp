#include<stdio.h>
int main(){
  char name[100],ch;
  int i=0;
  while(true){
    scanf("%c",&ch);
    if(ch == '*'){
      break;
    }
    else{
      name[i] = ch;
      i++;
    }
  }
  name[i] = '\0';
  printf("\nYou entered : %s\n",name);
}