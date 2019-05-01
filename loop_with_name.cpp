#include<stdio.h>
int main(){
  int i,j,range;
  char name[100][100],temp;
  printf("Enter the number of names : ");
  scanf("%d",&range);
  for( i=0;i<=range;i++){
    j=0;
    while(true){
      scanf("%c",&temp);
      if(temp == '\n')
        break;
      name[i][j] = temp;
      j++;
    }
    name[i][j] = '\0';
  }
  for(i = 0; i<=range;i++){
    for(j=0; name[i][j] != '\0';j++){
      printf("%c",name[i][j]);
    }
    printf("\n");
  }

}