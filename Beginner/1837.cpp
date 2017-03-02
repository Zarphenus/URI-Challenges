#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, b, quotient;

    cin >> a >> b;

    if(b > 0)
        quotient = floor((a * 1.0) / b);
    else
        quotient = ceil((a * 1.0) / b);

    cout << quotient << " " << abs(a - (b * quotient)) << endl;
    return 0;
}
