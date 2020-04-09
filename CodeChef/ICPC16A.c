#include <stdio.h>

int main(void)
{
    int t, x1, y1, x2, y2;
    scanf("%d\n", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d %d %d\n", &x1, &y1, &x2, &y2);
        if (x1 != x2 && y1 != y2)
        {
            printf("sad\n");
        }
        else if (x1 > x2)
        {
            printf("left\n");
        }
        else if (x2 > x1)
        {
            printf("right\n");
        }
        else if (y1 > y2)
        {
            printf("down\n");
        }
        else
        {
            printf("up\n");
        }
    }
    return 0;
}