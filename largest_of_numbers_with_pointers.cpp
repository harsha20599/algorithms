#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main(){
  int *numbers,range,largest = 0;
  printf("Enter the number of elements :");
  scanf("%d",&range);
  numbers = (int *) malloc(range * sizeof(int));
  largest = 0;
  printf("Enter the elements :");
  for(int i=0; i<range; i++){
    scanf("%d",numbers+i);
    if(*(numbers+i) > largest) {
      largest = *(numbers+i);  
    }
  }
  printf("The largest number is %d",largest);
  free(numbers);
}
