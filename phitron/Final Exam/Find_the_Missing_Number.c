#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        long long m;
        long long a, b, c;
        scanf("%lld %lld %lld %lld", &m, &a, &b, &c);

        long long p = a * b * c;

        if (p == 0)
        {
            if (m == 0)
            {
                printf("0\n");
            }
            else
            {
                printf("-1\n");
            }
            continue;
        }

        if (m % p == 0)
        {
            printf("%lld\n", m / p);
        }    
        else
        {
            printf("-1\n");
        }
    }

    return 0;
}