#include <iostream>
#include <string>

using namespace std;

int main() {
    string crow;
    int scream = 0, num = 0, luckNums[3];

    while(scream < 3) {
        getline(cin, crow);

        if(crow.compare("caw caw") == 0) {
            luckNums[scream] = num;
            num = 0;
            scream++;
        } else {
            num += (crow[0] == '*') ? 4 : 0;
            num += (crow[1] == '*') ? 2 : 0;
            num += (crow[2] == '*') ? 1 : 0;
        }
    }

    for(int i = 0; i < 3; i++)
        cout << luckNums[i] << endl;

    return 0;
}
