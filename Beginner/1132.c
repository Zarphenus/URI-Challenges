#include <stdio.h>

int main() {
   int a, b, swap, sum = 0;

   scanf("%d %d", &a, &b);

   if(a > b) {
      swap = a;
      a = b;
      b = swap;
   }

   while(a <= b) {
      if(a % 13 != 0) sum += a;
      a++;
   }

   printf("%d\n", sum);

   return 0;
}
