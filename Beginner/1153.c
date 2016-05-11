#include <stdio.h>

long factorial(long n) {
   if(n > 1)
      return n * factorial(n - 1);
   return 1;
}

int main() {
   long n;
   scanf("%ld", &n);
   printf("%ld\n", factorial(n));

   return 0;
}
