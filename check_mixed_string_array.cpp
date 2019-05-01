// check whether a given mixed string is present in array or not
#include<stdio.h>
#include<string.h>

int main(){
  char names[20][20],key[20];
  int n,i,length,j,k;
  printf("Enter the number of strings to be inserted :");
  scanf("%d",&n);
  for(i = 0; i<= n; i++ ){
    gets(names[i]);
  }
  printf("Enter the string to check");
  gets(key);

  length = strlen(key); 
  for(i = 0; i < length ; i++){
    for(j = 0; j <= n; j ++){
      for(k = 0 ; names[j][k]!= '\0'; k++){
        if(key[i] == names[j][k]){
          
        }    
          
      }     
    }
  }
 

}