#include <stdio.h> 
int cuadrado( int y ); /* prototipo de la función */ 
 
 int main()  { 
 int x,resultado; 

   for ( x = 1; x <= 10; x++ ) {  


   resultado=cuadrado(x);
   cout<<" "<<resultado;

 } 
 
 
 printf( "\n" ); 
 
 return 0; 
 } 
int cuadrado( int y ){ 

return y * y; 

 } 


