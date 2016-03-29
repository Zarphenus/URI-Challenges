#include <iostream>
#include <iomanip>

#define CQ_PRECO    4.00
#define XS_PRECO    4.50
#define XB_PRECO    5.00
#define TOR_PRECO   2.00
#define REFRI_PRECO 1.50

using namespace std;

int main() {
   int code, amount;

   cin >> code >> amount;

   cout << fixed;
   switch(code) {
      case 1:
         cout << "Total: R$ " << setprecision(2) << CQ_PRECO * amount << endl;
         break;

      case 2:
         cout << "Total: R$ " << setprecision(2) << XS_PRECO * amount << endl;
         break;

      case 3:
         cout << "Total: R$ " << setprecision(2) << XB_PRECO * amount << endl;
         break;

      case 4:
         cout << "Total: R$ " << setprecision(2) << TOR_PRECO * amount << endl;
         break;

      case 5:
         cout << "Total: R$ " << setprecision(2) << REFRI_PRECO * amount << endl;
         break;
   }

   return 0;
}
