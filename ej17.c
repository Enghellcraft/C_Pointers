#include<stdio.h>

int main ( ) {
 void *generico ;
 int *pint , x = 3 ;

 char *pchar = "Punteros a caracteres" ;

 pint = &x ;

 printf ( " E l v a l o r a p u n t a d o p o r p i n t e s % d ( v a l o r d e x )\n " , *pint ) ;

 generico = pchar ;

 printf ( " \n \ n g e n e r i c o ( t i p o v o i d ) a p u n t a a o b j e t o c h a r : %s " , generico ) ;
 printf ( " \n \ n I m p r i m o a h o r a g e n e r i c o c o m o c h a r :\n \n " ) ;

 puts( ( char* ) generico ) ;

 printf ("%c", generico);

return 0 ;
}
