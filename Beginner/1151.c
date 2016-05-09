#include <stdio.h>

int main() {
   int a = 0, b = 1, num;

   scanf("%d", &num);

   while(num-- != 0) {
      if(a == 0)
         printf("%d", a);
      else
         printf(" %d", a);

      b += a;
      a = b - a;
   }

   printf("\n");

   return 0;
}
