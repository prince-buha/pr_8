/*
Q.2 Write a Program to find cubes of all elements from a given 2D array using Pointer with UDF.
For example,
Input:
Enter array's size: 2

Enter array elements:
a[0][0] = 3
a[0][1] = 2
a[1][0] = 5
a[1][1] = 4

Output:
Cubes of all elements:
27    8
125 64
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
