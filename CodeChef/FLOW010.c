#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        char c;
        scanf(" %c", &c);
        if (c == 'B' || c == 'b')
            printf("BattleShip\n");
        if (c == 'C' || c == 'c')
            printf("Cruiser\n");
        if (c == 'D' || c == 'd')
            printf("Destroyer\n");
        if (c == 'F' || c == 'f')
            printf("Frigate\n");
    }
    return 0;
}