#include<stdio.h>

int main (void){

int i,j,*p;

p = &i;
*p = 21;

printf ("%d, %d,%d, %d,%d, %d,%d", p, *p, &p, i, &i, j, &j);

p = &j;
*p = 1;

printf ("%d, %d,%d, %d,%d, %d,%d", p, *p, &p, i, &i, j, &j);

return 0;
}
