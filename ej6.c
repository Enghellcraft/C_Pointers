#include<stdio.h>


int main () {
int x = 5;
float y = 5;
float *xPtr;
 xPtr = &y;
printf ("%f", *xPtr) ;
printf ("%d", xPtr);

return 0;
}
