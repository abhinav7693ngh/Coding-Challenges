#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int ncase;
    int BitsSetTable256[256];
    BitsSetTable256[0] = 0;
    for (int i = 0; i < 256; i++)
    {
        BitsSetTable256[i] = (i & 1) +
                             BitsSetTable256[i / 2];
    }
    cin >> ncase;
    while (ncase--)
    {
        int even = 0, odd = 0, arrLength, noQuery, count = 0, my, mychecker, myQuery;
        cin >> arrLength >> noQuery;
        int arr[arrLength];
        for (int i = 0; i < arrLength; i++)
        {
            cin >> my;
            arr[i] = BitsSetTable256[my & 0xff] + BitsSetTable256[(my >> 8) & 0xff] + BitsSetTable256[(my >> 16) & 0xff] + BitsSetTable256[my >> 24];
        }
        for (int k = 0; k < noQuery; k++)
        {
            cin >> myQuery;
            count = BitsSetTable256[myQuery & 0xff] + BitsSetTable256[(myQuery >> 8) & 0xff] + BitsSetTable256[(myQuery >> 16) & 0xff] + BitsSetTable256[myQuery >> 24];
            for (int n = 0; n < arrLength; n++)
            {
                if ((arr[n] % 2 == 0 && count % 2 == 0) || (arr[n] % 2 != 0 && count % 2 != 0))
                {
                    even++;
                }
                else
                {
                    odd++;
                }
            }
            count = 0;
            cout << even << ' ' << odd << '\n';
            even = 0;
            odd = 0;
        }
    }
    return 0;
}