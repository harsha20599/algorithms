#include<stdio.h>
int main(){
  int mainCount=0,mainOpen=0,pCount=0,stack[100],last=0,se=0;
  char temp;
  printf("Enter the program :");
  scanf("%c",&temp);
  if(temp == 123){
    stack[last] = 1;
    last++;
    
    while(true){
      scanf("%c",&temp);
      if(temp == '\n'){
        break;
      }
      // printf("%d\n",temp);
      switch(temp){
        case 60:
          stack[last] = 3;
          last++;
          mainOpen=1;
          mainCount++;
          break;
        case 40:
          if(mainOpen != 1){
            if(stack[last-1] != 2){
              stack[last] = 2;
              last++;
            }
            else{
              se =1;
            }
          }else{
            se = 1;
          }
          break;
        case 123: 
          stack[last] = 1;
          last++;
          break;
        case 125:
          if(stack[last-1] == 1){
            last--;
          }
          else{
            se = 1;
          }
          break;
        case 41:
          if(stack[last-1] == 2){
            last--;
          }
          else{
            se = 1;
          }
          break;
        case 62:
          mainOpen = 0;
          if(stack[last-1]==3 ){
            last--;
          }
          else{
            se = 1;
          }
          break;
        case 'P':
        case 'p':
          pCount++;
          break;
        default:
          se = 1;
          break;
      }
    }
    

  }else{
    se = 1;
  }
  if(mainOpen == 1 || mainCount != 1)
  {
    se = 1;
  }
  if(pCount > 100){
    printf("You are exceeded max no of statements ");
  }
  if(last != 0){
    se = 1;
  }
  if(se == 1){
    printf("There is a syntax error \n");
  }else{
    printf("The program is corrent \n");
  }
}