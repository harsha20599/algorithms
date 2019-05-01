#include <stdio.h>
#include<stdlib.h>
int main(){
    //static
    // int a[100];
    // int *p;
    // p = &a;

    //dynamic
    int n,i;
    int *a;
    printf("Enter the number of elements :");
    scanf("%d",&n);
    a = (int *) malloc(n * sizeof(int) );

    for(i = 0;i < n;i++){
        scanf("%d",(a+i));
    }

    for(i = 0;i < n;i++){
        printf("%d",*(a+i));
    }

}
