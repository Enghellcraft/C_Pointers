#include<stdio.h>

int main ( ) {

int a , b , *p , *q , *r ;
char c , d , *m , *n ;

a = 5 ; b = 7 ;
q = &a ;
p = q ;
*p = b ;

printf ( " %d \n \n \n " , *q ) ;

r = &b ;
*r = *q ;

printf ( "a = %d , b = %d , *p = %d , *q = %d ,*r = % d \n \n \n" , a , b , *p , *q , *r ) ;

c = 'A' ; d = 'B' ; m = &c ; n = &d ;
*m = *n ;

printf ( " %c %c \n \n \n " , *m, *n) ;

return 0 ;
}


