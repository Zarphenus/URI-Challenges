#include <stdio.h>

int main() {
   int x, z, result = 0, i, sum = 0;

   scanf("%d", &x);

   do {
      scanf("%d", &z);
   } while(z <= x);

   for(i = x; sum <= z; i++) {
      sum += x++;
      result++;
   }

   printf("%d\n", result);

   return 0;
}
