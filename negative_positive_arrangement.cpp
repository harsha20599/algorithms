#include<stdio.h>
int main(){
  int range,elements[100],i,neg,pos,temp;
  // Number of repetitions in the array
  printf("Enter the number of elements : ");
  scanf("%d",&range);

  printf("Enter the elements : ");
  for(i=0;i<range;i++){
    scanf("%d",&elements[i]);
  }

  for(neg=0,pos=range-1; neg <= pos; neg++,pos--){

    if(elements[neg] > 0 && elements[pos] < 0){
      // swap here
      temp = elements[neg];
      elements[neg] = elements[pos];
      elements[pos] = temp;0
    }
    if(elements[neg] > 0) {
      neg--;
    }
    if(elements[pos] < 0){
      pos++;
    }

  }
  
  for(i=0;i<range;i++){
    printf("%d\t",elements[i]);
  }


}