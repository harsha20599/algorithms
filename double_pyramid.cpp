#include<stdio.h>
int main(){
  int row,col,space,range;
  printf("Enter the number :");
  scanf("%d",&range);
  for(row=1;row<=range;row++){
    for(space =1;space <row;space++){
      printf(" ");
    }
    for(col=1;col<=(range-row)+1;col++){
      printf("* ");
    }
    printf("\n");
  }
  for(row=range-1;row>=1;row--){
    for(space =1;space <row;space++){
      printf(" ");
    }
    for(col=1;col<=(range-row)+1;col++){
      printf("* ");
    }
    printf("\n");
  }
}