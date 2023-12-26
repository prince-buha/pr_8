/*
Q.1 Write a Program to find the length of a string using a Pointer.
For example,
Input:
Enter any string: hello world

Output:
The length of a string is: 11
*/
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
