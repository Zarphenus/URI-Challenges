#include <stdio.h>

int main() {
   int a, b, swap;

   scanf("%d %d", &a, &b);

   if(a > b) {
      swap = a;
      a = b;
      b = swap;
   }

   while(++a < b)
      if(a % 5 == 2 || a % 5 == 3) printf("%d\n", a);

   return 0;
}
