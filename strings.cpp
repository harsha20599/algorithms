#include <stdio.h>
int main(){
	int length=0,i;
	char name[100],rev[100];
	printf("Enter your name \n");
	gets(name);
	
	i=0;
	while(name[i] != '\0'){
		length=length+1;
		i++;
	}


	i=0;
	while(i<length){
		rev[i]=name[length-i-1];
		i++;
	}
	rev[length] = '\0';
	puts(rev);


	strcp(s1,s2);
	printf("\nThe length of the string is %d\n",length );

}