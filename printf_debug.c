#include <stdlib.h>
#include <stdio.h>

int main(void){
	
	printf( "one\n" );
	
	int * ptr = (int *) malloc( 2 * sizeof(int) );
	
	printf( "two\n" );
		
	*(ptr + 2) = 12;
		
	printf( "three\n" );
	
	return 0;
	
}