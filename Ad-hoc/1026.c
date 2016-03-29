/*
 * URI Online Judge - https://www.urionlinejudge.com.br
 * Ad-hoc
 * Problem 1026
 *
 * Author: Gabriel Oliveira dos Santos
 * 2016
 */

#include <stdio.h>
#include <stdint.h>

int main() {
   uint32_t a, b;

   while(scanf("%u %u", &a, &b) != EOF)
      printf("%u\n", (a & (~b)) | ((~a) & b));

   return 0;
}
