#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   if (puts("Hello, World!") == EOF)
   {
      return EXIT_FAILURE;
      // code here never executes
   }
   return EXIT_SUCCESS;
   // code here never executes
}
