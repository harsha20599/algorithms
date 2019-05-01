#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int digits[11] = {0};
    int i;
    char str[1000];
    scanf("%[^\n]",str);
    // printf("%s",str);

    for(i = 0; str[i] != '\0';i++){
        printf("%c",str[i]);
        if((str[i]-'0') <= 9){
            printf("%c true\n",str[i]);
            digits[str[i]] = digits[str[i]] + 1;
        }
    }

    for(i =1; i<=10;i++){
        printf("%d ",digits[i]);
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
