#include<stdio.h>
// int fibonacci(int first, int second, int limit){
//   int temp;
//   if(second >= limit){
//     return first;
//   }
//   else{
//     temp = second;
//     second = first+second;
//     first = second;
//     printf("%d\t",second);
//     return fibonacci(first,second,limit);
//   }
// }
int fibonacci(int n){
  if(n == 0 )
    return 0;
  else if( n == 1)
    return 1;
  else{
    return (fibonacci(n-1)+fibonacci(n-2));
  }
}
int main(){
  int n;
  printf("Enter the range of the fibonacci series :");
  scanf("%d",&n);
  // printf("The nearest to the %d is %d\n",n,fibonacci(1,1,n));
  printf("The nearest to the %d is %d\n",n,fibonacci(n));

}