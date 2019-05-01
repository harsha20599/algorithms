#include<stdio.h>
int isExistIn(char *str, char *key){
  int same;
  for(int i =0 ;str[i]!= '\0';i++){
    if(str[i] == key[0]){
      same = 1;
      for(int j=0; key[j]!= '\0';j++){
        if(str[i+j] != key[j]){
          same = 0;
        }
      }
      if(same == 0){
        return 0;
      }else{
        return 1;
      }
    }
  }
  return 0;
}
int main(){
  char str1[100],str2[100];
  printf("Enter the string 1 :");
  gets(str1);
  printf("Enter the string 2 :");
  gets(str2);
  if(isExistIn(str1,str2)){
    printf("Yes\n");
  }else{
    printf("No\n");
  }
}