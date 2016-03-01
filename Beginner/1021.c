/*
 * URI Online Judge - https://www.urionlinejudge.com.br
 * Beginner
 * Problem 1021
 *
 * Author: Gabriel Oliveira dos Santos
 * 2016
 */

#include <stdio.h>

#define HUNDRED 100.00f
#define FIFTY    50.00f
#define TWENTY   20.00f
#define TEN      10.00f
#define FIVE      5.00f
#define TWO       2.00f
#define ONE       1.00f
#define HALF      0.50f
#define QUARTER   0.25f
#define DIME      0.10f
#define NICKEL    0.05f
#define PENNY     0.01f

int main() {
   float value;
   int nHun = 0, nFif = 0, nTwe = 0, nTen = 0,
       nFiv = 0, nTwo = 0, nOne = 0, nHal = 0,
       nQua = 0, nDim = 0, nNic = 0, nPen = 0;

   scanf("%f", &value);

   if(value > 0.00f && value < 1000000.00f) {
      while(value > 0.001f) {
         if(value - HUNDRED >= 0.00f) {
            value -= HUNDRED;
            nHun++;
         } else if(value - FIFTY >= 0.00f) {
            value -= FIFTY;
            nFif++;
         } else if(value - TWENTY >= 0.00f) {
            value -= TWENTY;
            nTwe++;
         } else if(value - TEN >= 0.00f) {
            value -= TEN;
            nTen++;
         } else if(value - FIVE >= 0.00f) {
            value -= FIVE;
            nFiv++;
         } else if(value - TWO >= 0.00f) {
            value -= TWO;
            nTwo++;
         } else if(value - ONE >= 0.00f) {
            value -= ONE;
            nOne++;
         } else if(value - HALF >= 0.00f) {
            value -= HALF;
            nHal++;
         } else if(value - QUARTER >= 0.00f) {
            value -= QUARTER;
            nQua++;
         } else if(value - DIME >= 0.00f) {
            value -= DIME;
            nDim++;
         } else if(value - NICKEL >= 0.00f) {
            value -= NICKEL;
            nNic++;
         } else {
            value -= PENNY;
            nPen++;
         }
      }

      printf("NOTAS:\n");
      printf("%d nota(s) de R$ 100.00\n", nHun);
      printf("%d nota(s) de R$ 50.00\n", nFif);
      printf("%d nota(s) de R$ 20.00\n", nTwe);
      printf("%d nota(s) de R$ 10.00\n", nTen);
      printf("%d nota(s) de R$ 5.00\n", nFiv);
      printf("%d nota(s) de R$ 2.00\n", nTwo);
      printf("MOEDAS:\n");
      printf("%d moeda(s) de R$ 1.00\n", nOne);
      printf("%d moeda(s) de R$ 0.50\n", nHal);
      printf("%d moeda(s) de R$ 0.25\n", nQua);
      printf("%d moeda(s) de R$ 0.10\n", nDim);
      printf("%d moeda(s) de R$ 0.05\n", nNic);
      printf("%d moeda(s) de R$ 0.01\n", nPen);
   }


   return 0;
}
