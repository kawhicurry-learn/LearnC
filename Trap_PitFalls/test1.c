#include <stdio.h>

int main() {
  int a = 0, b = 0;
  a-- - b;
  int *p = a;

  // add bracket
  b = a /*b;
         */
      ;

  // nest comment

  /*
a=1;
/*
b=2;
*/
  * /

      ;
}
