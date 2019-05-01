#include<stdio.h>
int main(){
  int range,elements[100],i;
  printf("Enter the number of elements :");
  scanf("%d",&range);
  printf("Enter the elements :");

  for(i = 0; i < range;i++){

    scanf("%d",&elements[i]);

    if(i > 0){
      if(elements[i-1] < elements[i]){
        printf("%d --- %d\n",elements[i-1],elements[i]);
      }
      else{
        printf("%d --- %d\n",elements[i-1],-1);
      }
    }

  }

  printf("%d -- %d",elements[range-1],-1);

}