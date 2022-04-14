#include <stdio.h>
#include <ctype.h>

int main () {
   int var1 = 'd';
   int var2 = '9';
    
   if( isdigit(var1) ) {
      printf("var1 = |%c| tsifer mun\n", var1 );
   } else {
      printf("var1 = |%c| tsifer bish\n", var1 );
   }
   
   if( isdigit(var2) ) {
      printf("var2 = |%c| tsifer mun\n", var2 );
   } else {
      printf("var2 = |%c| tsifer bish\n", var2 );
   }
   
   return(0);
}
