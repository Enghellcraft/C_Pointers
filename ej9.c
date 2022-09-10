#include<stdio.h>

int main ( ) {

int a , b , c ;
int *p1 , *p2 ;

p1 = &a ;
*p1 = 1 ;
printf ("%d, %d, %d, %d, %d, %d, %d \n", a, b, c, p1, p2, *p1, *p2 );
p2 = &b ;
*p2 = 2 ;
printf ("%d, %d, %d, %d, %d, %d, %d \n", a, b, c, p1, p2, *p1, *p2 );
p1 = p2 ;
printf ("%d, %d, %d, %d, %d, %d, %d \n", a, b, c, p1, p2, *p1, *p2 );
*p1 =0 ;
printf ("%d, %d, %d, %d, %d, %d, %d \n", a, b, c, p1, p2, *p1, *p2 );
p2 = &c ;
printf ("%d, %d, %d, %d, %d, %d, %d \n", a, b, c, p1, p2, *p1, *p2 );
*p2 =3 ;
printf ("%d, %d, %d, %d, %d, %d, %d \n", a, b, c, p1, p2, *p1, *p2 );
return 0 ;
}
