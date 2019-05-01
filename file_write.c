#include<stdio.h>
int main(){
  FILE *fp;
  fp = fopen("demo.txt","w");
  char ch;
  while((ch=getchar())!='$'){
    putc(ch,fp);
  }
  fclose(fp);
}
// int main(){
//   FILE *fp;
//   int i;
//   char firstName[20], lastName[20];
//   fp = fopen("demo.txt","w");
//   printf("Enter your first name :");
//   gets(firstName);
//   printf("Enter your last name :");
//   gets(lastName);
//   for(i=0; firstName[i]!='\0';i++){
//     fputc(firstName[i],fp);
//   }
//   fputc('\n',fp);
//   for(i=0; lastName[i]!='\0';i++){
//     fputc(lastName[i],fp);
//   }
//   fputc('\n',fp);
// }