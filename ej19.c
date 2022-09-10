#include<stdio.h>

int main (void) {

int x = 5 ;
int y = 10 ;

int *xPtr = NULL ;
int *yPtr = NULL ;

xPtr = &x ;
yPtr = &x ;

*xPtr = *xPtr + 1 ;

(*yPtr)--;

printf ( " x : %d \n " , x ) ;
printf ( " y : %d \n " , y ) ;
printf ( " x : %d \n " , *xPtr ) ;
printf ( " y : %d \n " , *yPtr ) ;

return 0;
}
