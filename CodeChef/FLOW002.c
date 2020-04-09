#include <stdio.h>

int main()
{
    // Read the number of test cases.
    int n, ans;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        // Read the input a, b
        int a, b;
        scanf("%d %d", &a, &b);
        ans = a % b;
        printf("%d\n", ans);
    }

    return 0;
}