#include <iostream>
#include <string>

using namespace std;

int main() {
    string takeSheldon, takeRaj;
    int cases, curCase;

    cin >> cases;
    curCase = 1;

    while(curCase <= cases) {
        cin >> takeSheldon >> takeRaj;

        if(takeSheldon.compare(takeRaj) == 0)
            cout << "Caso #" << curCase << ": De novo!" << endl;
        else if(takeSheldon.compare("pedra") == 0) {
            if(takeRaj.compare("tesoura") == 0 || takeRaj.compare("lagarto") == 0)
                cout << "Caso #" << curCase << ": Bazinga!" << endl;
            else
                cout << "Caso #" << curCase << ": Raj trapaceou!" << endl;
        } else if(takeSheldon.compare("papel") == 0) {
            if(takeRaj.compare("pedra") == 0 || takeRaj.compare("Spock") == 0)
                cout << "Caso #" << curCase << ": Bazinga!" << endl;
            else
                cout << "Caso #" << curCase << ": Raj trapaceou!" << endl;
        } else if(takeSheldon.compare("tesoura") == 0) {
            if(takeRaj.compare("papel") == 0 || takeRaj.compare("lagarto") == 0)
                cout << "Caso #" << curCase << ": Bazinga!" << endl;
            else
                cout << "Caso #" << curCase << ": Raj trapaceou!" << endl;
        } else if(takeSheldon.compare("lagarto") == 0) {
            if(takeRaj.compare("Spock") == 0 || takeRaj.compare("papel") == 0)
                cout << "Caso #" << curCase << ": Bazinga!" << endl;
            else
                cout << "Caso #" << curCase << ": Raj trapaceou!" << endl;
        } else if(takeSheldon.compare("Spock") == 0) {
            if(takeRaj.compare("tesoura") == 0 || takeRaj.compare("pedra") == 0)
                cout << "Caso #" << curCase << ": Bazinga!" << endl;
            else
                cout << "Caso #" << curCase << ": Raj trapaceou!" << endl;
        }

        curCase++;
    }

    return 0;
}
