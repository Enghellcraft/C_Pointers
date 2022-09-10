#include<stdio.h>

int main (void) {

int a = 25;
int *ptrl , **ptr2 ,  ***ptr3 , ****ptr4 ;

ptrl = &a;
ptr2 = ptrl;
ptr3 = ptr2;
ptr4 = ptr3;

printf ("%d, %d, %d, %d, %d ", a, *ptrl, *ptr2, *ptr3, *ptr4);


return 0;
}
