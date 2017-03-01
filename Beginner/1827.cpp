#include <cstdio>
#include <cstdlib>

int main() {
    int **mat, length, i;

    while(scanf("%d", &length) != EOF) {
        mat = (int**) malloc(length * sizeof(int*));
        for(i = 0; i < length; i++)
            mat[i] = (int*) calloc(length, sizeof(int));

        for(i = 0; i < length; i++)
            mat[i][i] = 2;

        i = 0;
        for(int j = length - 1; j >= 0; j--) {
            mat[i++][j] = 3;
        }

        mat[length / 2][length / 2] = 4;

        for(i = length / 3; i < length - (length / 3); i++) {
            for(int j = length / 3; j < length - (length / 3); j++) {
                mat[i][j] = (mat[i][j] != 4) ? 1 : 4;
            }
        }

        for(i = 0; i < length; i++) {
            for(int j = 0; j < length; j++) {
                printf("%d", mat[i][j]);
            }
            printf("\n");
        }

        printf("\n");

        for(i = 0; i < length; i++)
            free(mat[i]);

        free(mat);
    }

    return 0;
}
