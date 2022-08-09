#include <stdio.h>

int main () {
	int a ;
	printf( "input your line : " ) ;
	scanf( "%d", &a ) ;
	
	for ( int y = 1 ; y <= a ; y++ ) {
		for ( int x = 2 ; x <= y ; x++ ) {
			printf(" ") ;
		}//end for
		for (int x = a ; x >= y ; x--) {
			printf( "*" ) ;
		}//end for
		printf( "\n" ) ;
    }//end for
	return 0 ;
}//end function
