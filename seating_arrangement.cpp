#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>
int main(){
  int i,randomIndex,j;
  srand(time(NULL));
  int remainingTables,currentTableLimit,currentTablePosition;
  int table[9][3];
  char students[30][4] = { "501","502","503","504","505","506","507","508","509","510","511","512","513","514","515","516","517","518","519","520","521","522","523","524","525","526","527","528","529","530"}; 

  remainingTables = 9;
  currentTablePosition = 0;
  currentTableLimit = ceil(30/9);
  printf("\n---------------------------\nTable %d ::: ",(10-remainingTables));
  
  for(i=0;i<30;i++){
    randomIndex = (rand()%30);

    if(strcmp(students[randomIndex],"---")){

      if(currentTablePosition >= currentTableLimit){
        //if the table count reaches to end of the limit
        remainingTables--;
        currentTablePosition=1;
        currentTableLimit = ceil((float)(30 -i)/remainingTables);
        printf("\n---------------------------\nTable %d ::: ",(10-remainingTables));
      }else{
        currentTablePosition++;
      }

      printf("\t%s",students[randomIndex]);
      strcpy(students[randomIndex],"---");

    }
    else{
      i--;
    }
  }
}