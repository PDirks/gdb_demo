#include <stdlib.h>
#include <stdio.h>

int main(void){
	
	printf( "one\n" );
	
	int * ptr = (int *) malloc( 2 * sizeof(int) );
	
	printf( "two\n" );
		
	int i;
	for( i = 0; i <= 2; i++ ){
		*(ptr+i) = 123123123;
		printf("%d. %d\n", i, *(ptr+i));
	}
		
	printf( "three\n" );
	
	return 0;
	
}
