#include <stdio.h>

int main(void)
{
    int n, year;
    scanf("%d\n", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d\n", &year);
        if (year == 2010 || year == 2015 || year == 2017 || year == 2019 || year == 2016)
        {
            printf("HOSTED\n");
        }
        else
        {
            printf("NOT HOSTED\n");
        }
    }
    return 0;
}
