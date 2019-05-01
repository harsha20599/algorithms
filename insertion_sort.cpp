\#include<stdio.h>
int main(){
  int range,i,j,num[100],temp;
  printf("Enter the number of elements :");
  scanf("%d",&range);
  printf("Enter the elements :");
  for(i = 0; i < range; i++){
    scanf("%d",&num[i]);
  }

  for(i = 1; i<range;i++){
    for(j = i; j > 0; j--){
      if(num[j] < num[j-1]){
        // swap
        temp = num[j];
        num[j] = num[j-1];
        num[j-1] = temp;
      }
    }
  }

  for(i = 0; i < range; i++){
    printf("%d  ",num[i]);
  }
  printf("\n");



}