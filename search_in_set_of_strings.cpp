#include<stdio.h>
// #include<string.h>
int strcmp(char *s1, char *s2){
  int i= 0,sum=0;
  while(*(s1+i) != '\0' || *(s2+i) != '\0'){
    sum = sum + (*(s2+i) - *(s1+i)  );
    i++;
  }
  if(sum > 0){
    return -1;
  }
  else if(sum < 0){
    return 1;
  }
  return sum;
}
int main(){
  char strings[20][20],key[20];
  int n,i;
  printf("Enter the number of strings to be inserted :");
  scanf("%d",&n);
  printf("Enter the strings :");
  for(i = 0;i<=n;i++){
    gets(strings[i]);
  }
  printf("Enter the key to be searched :");
  scanf("%s",key);
  for(i = 0 ;i <= n; i++){
    if(strcmp(strings[i],key) == 0){
      printf("key found\n");
      return 1;
    }
  }
  printf("Key not found\n");
  return 1;
}