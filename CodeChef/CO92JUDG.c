#include <stdio.h>

int main(void)
{
    int n, t, m;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);
        int alice[n], bob[n];
        for (int z = 0; z < 2; z++)
        {
            for (int j = 0; j < n; j++)
            {
                if (z == 0)
                    scanf("%d", &alice[j]);
                if (z == 1)
                    scanf("%d", &bob[j]);
            }
        }
        int hali = 0, hbob = 0, temp1, temp2, sum1 = 0, sum2 = 0;
        for (int i = 0; i < n; i++)
        {
            sum1 += alice[i];
            sum2 += bob[i];
            if (alice[i] >= hali)
                hali = alice[i];
            if (bob[i] >= hbob)
                hbob = bob[i];
        }
        int fsum1 = sum1 - hali;
        int fsum2 = sum2 - hbob;
        if (fsum1 > fsum2)
            printf("Bob\n");
        if (fsum1 < fsum2)
            printf("Alice\n");
        if (fsum1 == fsum2)
            printf("Draw\n");
    }
    return 0;
}