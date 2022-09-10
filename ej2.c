#include<stdio.h>

int main (void){

int a , b ;
int *pa ;

a=5;
pa = &a;
b = *pa;

printf ("%d, %d, %d, %d, %d", a, pa, *pa, b, &pa);


return 0;
}
