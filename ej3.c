#include<stdio.h>

int main (void){

int a, b, c;
int *p, *q, *r;

float m, n;
float *s, *t;

p=&a;
q=&b;

*q=40;
printf ("%d,%d,%d,%d,%d\n",b, &b, q, &q, *q);

printf ("ingrese el valor de a:\n");
fflush (stdin);
scanf ("%d", p);
printf ("%d,%d,%d,%d,%d\n",a, &a, p, &p, *p);

r=&a;

*r=200;
printf ("%d,%d,%d,%d,%d,%d,%d,%d\n",a, &a, p, &p, *p, r, &r, *r);

if (*p == *q){
    printf ("*p es igual a *q\n");
}

if (*p == *r){
    printf ("*p es igual a *q\n");
}

if (p == q) {
    printf ("p es igual a q\n");
}

printf ("%h", a);

return 0;
}
