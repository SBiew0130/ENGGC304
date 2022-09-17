#include <stdio.h>
#include <string.h>

struct pson {
        char name [100] ;
        float salary ;
        int duration ;
} ;

struct pson s [100] ;

int check_employee ( char check , int a ) {
    char name [100] ;
    switch ( check ) {
        case 'y' :
            getchar () ;
            printf ( "Employee Name : " ) ;
            gets(s[a].name) ;
            printf ( "Salary (Bath/Month) : " ) ;
            scanf ( "%f" , &s[a].salary ) ;
            printf ( "Duration (Year) : " ) ;
            scanf ( "%d" , &s[a].duration ) ;
            break ;
        case 'n' :
            return 0 ;
        default :
            getchar () ;
            printf ( "Employee Name : " ) ;
            gets (s[a].name) ;
            printf ( "Salary (Bath/Month) : " ) ;
            scanf ( "%f" , &s[a].salary ) ;
            printf ( "Duration (Year) : " ) ;
            scanf ( "%d" , &s[a].duration ) ;
            break ;
    }//end switch case
}//end function

void avgrich (int ct) {
    ct      = ct - 1 ;
    float averg , payment = 0 ;
    int i   = 0 ;
    
    while ( i <= ct ) {
        payment = s[i].salary + payment ;
        i++;
    }//end while
    
    averg = payment / ct ;
    printf ( "Average of Salary : %.2f Bath \n", averg ) ;
    printf ( "Payment of every month : %.2f Bath \n", payment ) ;
    printf ( "** Most duration in this business ** \n" ) ;
}//end function

void mostduration(int ct) {
    ct = ct - 1 ;
    float per_yaers[ct] ;
    int i = 0 ;

    while ( i <= ct ) {
        per_yaers[i] = s[i].salary * (s[i].duration) ;
        i++ ;
    }//end while

    int max     = per_yaers[0] ;
    int icount  = 0 ;
    int icc     = 0 ;

    while (icc <= ct) {
        int check_max = per_yaers[icc] > max ;
        switch (check_max) {
        case 1:
			max     = per_yaers[icc] ;
			icount  = icc ;
			icc++ ;
		    break ;
		case 0 :
			icc++ ;
			break ;
        }//end switch case
    }//end while
    
    printf ( "Name : %s (%.d Years)\n", s[icount].name , s[icount].duration ) ;
    printf ( "Salary : %.2f Bath \n", s[icount].salary ) ;
}//end function

int main () {
    int ct      = 0 ;
    int yn      = 1 ;
    char check ;
    while ( yn ) {
        printf ( "Do you want to Enter Employee Information? (y/n) : " ) ;
        scanf ( " %c", &check ) ;
        yn = check_employee( check , ct ) ;
        ct++ ;
    }//end while
    
    avgrich(ct) ;
    mostduration(ct) ;
    return 0 ;   
}//end function
