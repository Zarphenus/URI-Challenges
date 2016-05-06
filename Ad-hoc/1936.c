#include <stdio.h>

int factorial(int factor) {
   if(factor > 1)
      return factor * factorial(--factor);
   else
      return 1;
}

int main() {
   int n, elem = 1, factor = 1;

   scanf("%d", &n);

   while(factor > 0) {
      if(factorial(factor) > n) {
         n -= factorial(--factor);
         if(n == 0)
            factor = 0;
         else {
            factor = 1;
            elem++;
         }
      } else
         factor++;
   }

   printf("%d\n", elem);

   return 0;
}
