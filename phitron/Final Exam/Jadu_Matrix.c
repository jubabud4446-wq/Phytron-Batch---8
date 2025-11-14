#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    int mat[N][M];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    if (N != M) {
        printf("NO\n");
        return 0;
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {

            if (i == j || i + j == N - 1) {
                if (mat[i][j] != 1) {
                    printf("NO\n");
                    return 0;
                }
            }

            else {
                if (mat[i][j] != 0) {
                    printf("NO\n");
                    return 0;
                }
            }
        }
    }

    printf("YES\n");
    return 0;
}