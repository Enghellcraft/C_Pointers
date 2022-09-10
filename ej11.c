#include<stdio.h>

int main ( ) {

int u = 3 , v ;
int *pu ;
int *pv ;

pu = &u ;
v = *pu ;
pv = &v ;

printf ( " \ nu = %d &u = %X pu = %X *pu = %d \n" , u , &u , pu , *pu ) ;
printf ( " \ nv = %d &v = %X pv = %X *pv = %d \n" , v , &v , pv , *pv ) ;

return 0 ;
}
