#include <cstdio>
#include <cstdlib>

int main() {
    int *slugs, numSlugs, velGreater = -1;

    while(scanf("%d", &numSlugs) != EOF) {
        slugs = (int*) malloc(numSlugs * sizeof(int));

        for(int i = 0; i < numSlugs; i++)
            scanf("%d", &slugs[i]);

        for(int i = 0; i < numSlugs; i++)
            if(velGreater < slugs[i])
                velGreater = slugs[i];

        if(velGreater < 10)
            printf("1\n");
        else if(velGreater >= 10 && velGreater < 20)
            printf("2\n");
        else
            printf("3\n");

        free(slugs);
        velGreater = -1;
    }

    return 0;
}
