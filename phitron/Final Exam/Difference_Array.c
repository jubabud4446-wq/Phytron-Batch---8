#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int N;
        scanf("%d", &N);

        int A[N], B[N], C[N];


        for (int i = 0; i < N; i++)
        {
            scanf("%d", &A[i]);
            B[i] = A[i];
        }


        for (int i = 0; i < N - 1; i++)
        {
            for (int j = 0; j < N - i - 1; j++)
            {
                if (B[j] > B[j + 1])
                {
                    int temp = B[j];
                    B[j] = B[j + 1];
                    B[j + 1] = temp;
                }
            }
        }


        for (int i = 0; i < N; i++)
        {
            int diff = A[i] - B[i];
            if (diff < 0) diff = -diff;
            printf("%d ", diff);
        }
        printf("\n");
    }

    return 0;
}
