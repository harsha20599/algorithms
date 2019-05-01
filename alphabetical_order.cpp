#include<stdio.h>
#include<string.h>
int main(){
  char names[20][100],temp[100];
  int range,i,j;
  printf("Enter the number of names :");
  scanf("%d",&range);
  range++;
  printf("Enter the names :\n");
  for(i=0;i<range;i++){
    gets(names[i]);
  }
  for(i=1;i<range;i++){
    for(j=i;j>0;j--){
      if(strcmp(names[j-1],names[j]) > 0){
        strcpy(temp,names[j]);
        strcpy(names[j],names[j-1]);
        strcpy(names[j-1],temp);
      }
    }
  }
  
  printf("The alphabetical order is :\n");
  for(i=0;i<range;i++){
    printf("%s\n",names[i]);
  }

}