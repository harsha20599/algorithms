#include<stdio.h>
int main(){
  int range,i,keyCount,key,j;
  int elements[100];
  // Number of repetitions in the array
  printf("Enter the number of elements : ");
  scanf("%d",&range);

  printf("Enter the elements : ");
  for(i=0;i<range;i++){
    scanf("%d",&elements[i]);
  }

  for(i=0;i<range;i++){

    keyCount = 0;
    key = elements[i];

    for(j=i;j<range;j++){
      
      if(elements[j] != -1) {
        if(elements[j] == key){
          keyCount++;
          elements[j] = -1;
        }
      }

    } 

    (key == -1) ? : printf("The number of %d's are %d\n",key,keyCount)  ;

  }

}