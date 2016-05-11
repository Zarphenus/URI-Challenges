#include <stdio.h>

int main() {
   int x, repeats, sum = 0;

   do {
      scanf("%d", &x);
      if(x != 0) {
         if(x % 2 != 0) x++;

         repeats = 5;

         while(repeats-- != 0) {
            sum += x;
            x += 2;
         }

         printf("%d\n", sum);
         sum = 0;
      }
   } while(x != 0);
   return 0;
}
