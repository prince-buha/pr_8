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
