#include <iostream>

using namespace std;

int main() {
    char **obsMap, curComm;
    int mapWid, mapHei, x, y;

    cin >> mapWid >> mapHei;

    obsMap = new char*[mapHei];

    for(int i = 0; i < mapHei; i++)
        obsMap[i] = new char[mapWid];

    for(int i = 0; i < mapHei; i++)
        for(int j = 0; j < mapWid; j++)
            cin >> obsMap[i][j];

    x = y = 0;

    while(curComm != '*' && curComm != '-') {
        if(obsMap[x][y] != '.') {
            curComm = obsMap[x][y];
            obsMap[x][y] = '-';
        }

        if(curComm == '>') y++;
        else if(curComm == 'v') x++;
        else if(curComm == '<') y--;
        else if(curComm == '^') x--;

        if((x < 0 || x >= mapHei) || (y < 0 || y >= mapWid))
            curComm = '-';
    }

    if(curComm == '*')
        cout << "*" << endl;
    else
        cout << "!" << endl;

    return 0;
}
