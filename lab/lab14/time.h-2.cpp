#include <stdio.h>
#include <string.h>
#include <time.h>

int main () {
   struct tm t;

   t.tm_sec    = 20;
   t.tm_min    = 19;
   t.tm_hour   = 8;
   t.tm_mday   = 18;
   t.tm_mon    = 5;
   t.tm_year   = 91;
   t.tm_wday   = 5;

   puts(asctime(&t));
   
   return(0);
}
