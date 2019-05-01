#include <stdio.h>
#include <stdlib.h>
char**** get_document(char* text) {
    // char document[5][1000][1000][1000];
    int i,j,k,l;
    char ****document;
    for(i=0;i<5;i++){
        document = (char ****) malloc((5) * sizeof(char ***));
        for(j=0;j<1000;j++){
            document[i] = (char ***) malloc((1000) * sizeof(char **));
            for(k=0;k<1000;k++){
                document[i][j] = (char **) malloc((1000) * sizeof(char *));
                for(l=0;l<1000;l++){
                    document[i][j][k] = (char *) malloc((1000) * sizeof(char ));
                }
            }
        }
    }
    int para=0,sentence=0,word=0,character=0;
    long int m;
    while(text[m] !='\0'){
        if(text[m] == ' '){
          document[para][sentence][word][character] = '\0';
          character = 0;
          word++;
        }else if(text[m] == '.'){
          document[para][sentence][word][character++] = text[m];
          document[para][sentence][word][character] = '\0';
          character = 0;
          word = 0;
          sentence++;
        }else if(text[m] == '\n'){
          document[para][sentence][word][character++] = text[m];
          document[para][sentence][word][character] = '\0';
          character = 0;
          word = 0;
          sentence = 0;
          para++;
        }else{
            document[para][sentence][word][character++] = text[m];
        }
    }
    return document;
}
int main(){
  char text[1000];
  char ****document;
  char ch;
  int i;
  while( (ch=getchar())!='$'){
    text[i] = ch;
    i++;
  }
  text[i]='\0';
  document = get_document(text);
  

}