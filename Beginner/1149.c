#include <stdio.h>

int main() {
   int a, n, sum = 0;

   scanf("%d %d", &a, &n);

   while(n <= 0)
      scanf("%d", &n);

   while(n-- != 0)
      sum += a++;

   printf("%d\n", sum);

   return 0;
}
