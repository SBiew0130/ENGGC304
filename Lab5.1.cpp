#include <stdio.h>

int main() {
	int years ;
	printf ( "input years : " ) ;
	scanf ( "%d" ,&years ) ;
	if ( years % 4 == 0 )
		if ( years % 400 == 0 )
			printf ( "Feb = 29 days" ) ;
		else if ( years % 100 == 0 )
			printf ( "Feb = 28 days" ) ;
		else
			printf ( "Feb = 29 days" ) ;
	else
		printf ( "Feb = 28 days" ) ;

	return 0 ;
}//end function
