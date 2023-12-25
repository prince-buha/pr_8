#include<stdio.h>

main(){
	int i;
	char str[100];
	char *ptr;
	int count ;
	
	printf("enter your string :");
	gets(str);
	
	ptr = str;
	
	count = 0;
	
	while ( *ptr != NULL){
  	  count ++;
		ptr ++;		
	}
	printf("the length of string : %d",count);
	
}
