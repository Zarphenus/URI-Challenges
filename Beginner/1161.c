#include <stdio.h>

long long fatorial(int n) {
   if(n > 0)
      return n * fatorial(n - 1);
   else
      return 1;
}

int main() {
   long long a, b;

   while(scanf("%lld %lld", &a, &b) != EOF)
      printf("%lld\n", fatorial(a) + fatorial(b));

   return 0;
}
