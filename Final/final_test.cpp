#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct People {
	char name [100] ; //person name
	int yr ; //years
	int mh ; //month
	int d  ; //day 
}typedef infor ;

int  importinfor (infor [] ) ; //find information in structure
void show_infor (infor [], int ) ; //show output

int main() {
	infor yr_mh_d[100] ;
	int person  = importinfor(yr_mh_d) ;
	show_infor (yr_mh_d,person) ;

}

int importinfor (infor yr_mh_d[]){
	FILE *FP ; // fileinformation
	
	int person = 0 ;
	int un ; //information unnecessary
	char uns [100] ;
	FP = fopen( "a.txt" , "r") ;
	if (FP == NULL) {
		printf("\n Error opening file.") ;
		exit (0) ;
	}//end if
	fscanf(FP, " %s\t%s\t\t%s\n",uns,uns,uns) ;
	for (int i = 0; i < 100 ; i++) {
		if (fscanf(FP, " %d\t%s\t\t%d-%d-%d\n", &un , yr_mh_d[i].name , &yr_mh_d[i].yr , &yr_mh_d[i].mh , &yr_mh_d[i].d) != EOF ) {
			person++ ;	
		}
		else {
			break ;
		}
	}//end for
	fclose (FP) ;
	return person ; //return back count person
}

void show_infor (infor yr_mh_d[], int person ) {
	int allday [100] ;
	int Max = -999999 ;
	char *the_oldest ;
	int Min = 999999;
	char *youngest ;
	for (int i = 0 ; i < person ;i++) {
		allday [i] = ( 2018-yr_mh_d[i].yr ) * 365 + ( 6-yr_mh_d[i].mh ) * 30 + ( 21-yr_mh_d[i].d ) ;
		printf(" %s %d Years, %d Months\n", yr_mh_d[i].name , allday[i]/365 , ( allday[i]%365 )/30) ;
			
	}//end for
	for (int j = 0 ; j < person ; j++) {
		if (allday[j] > Max) {
			Max = allday [j] ;
			the_oldest = yr_mh_d[j].name ;	
		}
		if (allday[j] < Min ){
			Min = allday [j] ;
			youngest = yr_mh_d[j].name ;	
		}
	}//end for
	printf("\n Max : %s [%d Years, %d Months]\n" , the_oldest , Max/365 , ( Max%365)/30 ) ;//out put Max 
	printf(" Min : %s [%d Years, %d Months]\n", youngest , Min/365 , ( Min%365)/30 ) ;//out put Min
	
}//endfunctiong
