#include<stdio.h>
int main(){
  int i,n;
  int stud[3];
  printf("Enter the range");
  scanf("%d",&n);
  for(i = 0; i<n; i++){
    stud[i] = i;
    // k++;
  }
  
  for(int i = 0; i<n; i++){
    printf("%d\n",stud[i]);
  }

}