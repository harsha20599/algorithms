#include<stdio.h>
int main(){
  int i,count,j;
  char statement[100],temp;
  printf("Enter the statement :");
  scanf("%[^\n]",statement);

  for(i=0; statement[i]!= '\0';i++){
    if(statement[i] != '1' ){
      temp = statement[i];            
      (statement[i] == ' ')? printf("The no of Spaces are ") : printf("The no of %c are ",statement[i]);
      count = 0;
      for(j=0; statement[j] != '\0';j++){
        if(temp == statement[j]){
          statement[j] = '1';
          count++;
        }
      }
      printf("%d\n",count);
    }
  }

}