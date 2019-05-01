#include<stdio.h>
int main(){
  char str[100];
  printf("Enter the string :");
  scanf("%s",str);
  for(int i=0; str[i]!='\0';i++)
    printf("%c",(str[i]>64&&str[i]<87||str[i]>96&&str[i]<119)?str[i]=str[i]+4:(str[i]>=88&&str[i]<=91)?str[i]=66+(str[i]-88):str[i]=96+(str[i]-118));
}