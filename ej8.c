#include<stdio.h>

int main ( ) {

int *p ;
int a = 1 , b = 2 ;
int **s ;

p = &a ;
b = *p + 1 ;
s = &p ;

printf ( " p = %d , *p = %d , &p = %d \n" , p , *p , &p ) ;
printf ( " s = %d , *s = %d , &s = %d \n" , s , *s , &s ) ;

*s = &b ;

printf ( " S e    e j e c u t ó *s = &b \n y     a h o r a …\n" ) ;
printf ( " s = %d , *s = %d , &s = %d \n" , s , *s , &s ) ;

**s = 79 ;

printf ( " a = %d , &a = %d \n" , a , &a ) ;
printf ( " b = %d , &b = %d \n" , b , &b ) ;

return 0 ;
}
