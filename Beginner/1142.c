#include <stdio.h>

int main() {
   int lines, val = 1;

   scanf("%d", &lines);

   while(lines-- != 0) {
      printf("%d %d %d PUM\n", val, val + 1, val + 2);
      val += 4;
   }

   return 0;
}
