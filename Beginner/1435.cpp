#include <iostream>
#include <cstdio>

using namespace std;

int main() {
    int count = 1, dim, **mat, begin, end;

    cin >> dim;

    while(dim != 0) {
        mat = new int*[dim];

        for(int i = 0; i < dim; i++)
            mat[i] = new int[dim];

        begin = 0;
        end = dim;
        do {
            for(int i = begin; i < end; i++)
                mat[begin][i] = count;

            for(int i = begin; i < end; i++)
                mat[i][end - 1] = count;

            for(int i = end - 1; i >= begin; i--)
                mat[end - 1][i] = count;

            for(int i = end - 1; i >= begin; i--)
                mat[i][begin] = count;

            count++;
            begin++;
            end--;
        } while(begin < end);

        if(dim != 0) {
            for(int i = 0; i < dim; i++) {
                for(int j = 0; j < dim; j++) {
                    if(j == dim - 1)
                        printf("%3d\n", mat[i][j]);
                    else
                        printf("%3d ", mat[i][j]);
                }
            }
        }

        count = 1;
        for(int i = 0; i < dim; i++)
            delete [] mat[i];

        delete [] mat;

        cout << endl;

        cin >> dim;
    }

    return 0;
}
