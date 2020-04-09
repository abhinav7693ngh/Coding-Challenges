#include <stdio.h>

int main(void)
{
    int t, people, tmoney;
    scanf("%d\n", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &people, &tmoney);
        int check[people];
        for (int j = 0; j < people; j++)
        {
            scanf("%d", &check[j]);
        }
        for (int k = 0; k < people; k++)
        {
            if (tmoney - check[k] >= 0)
            {
                tmoney = tmoney - check[k];
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
        printf("\n");
    }
    return 0;
}