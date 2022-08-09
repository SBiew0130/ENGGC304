#include <stdio.h>

int main () {
	int a ;
	printf( "input your line : " ) ;
	scanf( "%d", &a ) ;
	if( a % 2 == 0 ) {
		for ( int y = 1 ; y <= a ; y++ ) {
			for ( int x = a-1 ; x >= y ; x-- ) {
				printf( " " ) ;
			}//end for
			for ( int x = 1 ; x <= y ; x++ ) {
				printf( "* " ) ;
			}//end for
			printf( "\n" ) ;
    	}//end for
	}//end if
	else {
		for ( int y = 1 ; y <= a ; y++ ) {
			for ( int x = 2 ; x <= y ; x++)  {
				printf( " " ) ;
			}//end for
			for ( int x = a ; x >= y ; x-- ) {
				printf( "* " ) ;
			}//end for
			printf( "\n" ) ;
    	}//end for
	}//end else	

	return 0 ;
}//end function
