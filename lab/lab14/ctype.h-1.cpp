#include <stdio.h>
#include <ctype.h>

int main () {
   int var1 = 'k';
   int var2 = '9';
   int var3 = '\t';
   int var4 = ' ';
    
   if( isalnum(var1) ) {
      printf("var1 = |%c| int esvel char\n", var1 );
   } else {
      printf("var1 = |%c| int esvel char bish \n", var1 );
   }
   
   if( isalnum(var2) ) {
      printf("var2 = |%c| int esvel char\n", var2 );
   } else {
      printf("var2 = |%c| int esvel char bish \n", var2 );
   }
   
   if( isalnum(var3) ) {
      printf("var3 = |%c| int esvel char\n", var3 );
   } else {
      printf("var3 = |%c| int esvel char bish \n", var3 );
   }
   
   if( isalnum(var4) ) {
      printf("var4 = |%c| int esvel char\n", var4 );
   } else {
      printf("var4 = |%c| int esvel char bish \n", var4 );
   }
   return(0);
}
