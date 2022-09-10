#include<stdio.h>

int main ( ) {
int n ;
int *ptr ;
n = 8 ;
printf ( " p t r e s %p \n " , ptr ) ;
ptr = &n ;
printf ( " n e s %d \n " , n ) ;
printf ( " & n e s %p \n " , &n ) ;
printf ( " * p t r e s %d \n " , *ptr ) ;
printf ( " p t r e s %p \n " , ptr ) ;
n--;
printf ( " n e s d e s p u e s d e n - - % d \ n " , n ) ;
printf ( " & n e s %p \n " , &n ) ;
ptr++ ;
printf( " p t r e s d e s p u e s d e p t r + + %p \n " , ptr ) ;
printf ( " * p t r e s %d \n " , *ptr ) ;

return 0 ;
}
