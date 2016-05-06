#include <stdio.h>

int main() {
   float a, b;

   do {
      scanf("%f", &a);
      if(a < 0.0f || a > 10.0f) printf("nota invalida\n");
   } while(a < 0.0f || a > 10.0f);

   do {
      scanf("%f", &b);
      if(b < 0.0f || b > 10.0f) printf("nota invalida\n");
   } while(b < 0.0f || b > 10.0f);

   printf("media = %.2f\n", (a + b) / 2);
   return 0;
}
