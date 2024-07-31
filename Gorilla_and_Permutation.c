#include <stdio.h>
#include <stdlib.h>

void solve() {
    int t;
    scanf("%d", &t);
    for (int test = 0; test < t; test++) {
        int n, m, k;
        scanf("%d %d %d", &n, &m, &k);

        int *permutation = (int*)malloc(n * sizeof(int));
        int index = 0;

        for (int i = k; i <= n; i++) {
            permutation[index++] = i;
        }

        for (int i = 1; i < k; i++) {
            if (i > m) {
                permutation[index++] = i;
            }
        }

        for (int i = 1; i <= m; i++) {
            permutation[index++] = i;
        }

        for (int i = 0; i < n; i++) {
            printf("%d ", permutation[i]);
        }
        printf("\n");

        free(permutation);
    }
}

int main() {
    solve();
    return 0;
}