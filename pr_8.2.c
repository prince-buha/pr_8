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
	
	int i,j;
	int a[2][2];
	int *ptr,*ntr;
	
	ptr=&a[i];
	ntr=&a[j];
	
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			printf("Enter array element a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}printf("\n");
	
	for(i=0; i<2; i++){
		printf(" %d \n",(*(ptr+i))*(*(ptr+i))*(*(ptr+i)));
	}
	for(j=0; j<2; j++){
		printf(" %d \n",(*(ntr+j))*(*(ntr+j))*(*(ntr+j)));
	}
}
