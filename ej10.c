#include<stdio.h>

int main ( ) {

int num , n ;
int *dir_n ;

num = 22 ;
n = 7 ;

dir_n = &n ;

printf ( " variable num: %d \n " , num ) ;
printf ( " direccion de memoria donde se almacena num: %p \n " , &num ) ;
printf ( " direccion de memoria almacenada en dir_n: %p \n " , dir_n ) ;
printf ( " valor de variable apuntada por dir_n: %d \n " , *dir_n ) ;

return 0 ;
}
