#include <stdlib.h>

int main(void){

	int * ptr;
	int len = 5;
	ptr = (int *) malloc( len * sizeof(int) );
	
	*(ptr) 		= 1;
	*(ptr + 1) 	= 2;
	*(ptr + 2) 	= 3;
	*(ptr + 3) 	= 4;
	*(ptr + 4) 	= 5;
	
	free(ptr);	

}