/*
 * gdb demo: factorial.c
 */
 
 #include <stdio.h>
 
 int main( void ){
 
 	int num;
 	do {
 	
 	} while ( num < 0 );
 	
 	int factorial;
 	int i;
 	for( i = 0; i <= num; i++ ){
 		factorial = factorial * i;
 	}// end for
 
 	printf( "%d! = %d\n", num, factorial );
 
 	return 0;
 }// end main
