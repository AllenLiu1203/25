#include<stdio.h>
#include<stdlib.h>

int main(void){
	int a,b;
	int *ptr[4];
	int array[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
	
	for(a=0;a<4;a++){
		ptr[a]=array[a];
	}

	for(a=0;a<4;a++){
		for(b=0;b<3;b++){
			printf("%3d", *(ptr[a]+b));
		}
		printf("\n");
	}
	system("pause");
	return 0;
} 
