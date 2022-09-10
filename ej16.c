#include<stdio.h>

int main ( ) {

int *p ;
double *q ;
void *r ;

p = q ;
p = ( int* ) q ;
p = r = q;

printf ("%d, %d, %d", p, q, r);

return 0 ;
}

