#include<stdio.h>

int main ( ) {

int a , b , *pta , **ptb ;
pta = &a ;
ptb = &pta ;

*pta = 8 ;
printf ( " ptb es : %d \n \n " , ptb ) ;
printf ( " Contenidos de *ptb d e s p u é s d e &pt a e s : %d \n \n " , *ptb ) ;
printf( " Contenidos de  **ptb d e s p u é s d e &pt a e s : %d \n \n " , **ptb ) ;

 **ptb = **ptb + 3 ;
printf ( " Contenidos de  **ptb e s : %d \n \n " , **ptb ) ;
printf ( " Contenidos de  a e s : %d \n \n " , a ) ;

 *ptb = NULL ;
printf ( " Contenidos de  a d e s p u é s d e * p t b = N U L L , e s : %d \n \n " , a ) ;
printf ( " Contenidos de  *ptb d e s p u é s d e N U L L e s : %d \n \n " , *ptb ) ;

 b = 8 ;
 pta = &b ;
printf ( " Contenidos de  *ptb d e s p u é s d e p t a = &b , e s : %d \n \n " , *ptb ) ;
printf ( " Contenidos de  a e s : %d \n \n " , a ) ;
printf ( " Contenidos de  b d e s p u é s d e pta = &b , e s : %d \n \n " , b ) ;
printf ( " Contenidos de  *pta d e s p u é s d e pta = &b , e s : %d \n \n " , *pta ) ;
printf ( " Contenidos de  **ptb d e s p u é s d e pta = &b , e s : %d \n \n " , **ptb ) ;
printf ( " Contenidos de  *ptb d e s p u é s d e pta = &b , e s : %d \n \n " , *ptb ) ;

 **ptb = a + 10 ;
printf ( " Contenidos de  **ptb d e s p u é s d e **ptb = a + 10 , e s : %d \n \n " , **ptb ) ;
printf ( " Contenidos de  * p t a d e s p u é s d e **ptb = a + 10 , e s : %d \n \n " , *pta ) ;
printf ( " Contenidos de  a d e s p u é s d e **ptb = a + 10 , e s : %d \n \n " , a ) ;
printf ( " Contenidos de  b d e s p u é s d e **ptb = a + 10 , e s : %d \n \n " , b ) ;
printf ( " La suma de los Contenidos de  pta + ptb e s : %d \n \n " , ( *pta ) + ( **ptb ) ) ;

return 0 ;
}
