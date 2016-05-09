#include <stdio.h>
#include <math.h>

int main() {
   int lines, val = 1;

   scanf("%d", &lines);

   while(val <= lines) {
      printf("%d %d %d\n", val, (int)pow(val, 2), (int)pow(val, 3));
      printf("%d %d %d\n", val, (int)pow(val, 2) + 1, (int)pow(val, 3) + 1);
      val++;
   }

   return 0;
}
