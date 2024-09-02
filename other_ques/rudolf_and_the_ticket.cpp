#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        int l[n], r[m];
        for (int i = 0; i < n; i++)
        {
            cin >> l[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> r[i];
        }

        int sum = 0, cnt = 0;
        sort(l, l + n);
        sort(r, r + m);
        for (int i = 0; i < n; i++)
        {
            if (l[i] > k)
            {
                break;
            }
            for (int j = 0; j < m; j++)
            {
                if (l[i] + r[j] <= k)
                {
                    cnt++;
                }
                else
                {
                    break;
                }
            }
        }
        cout << cnt << endl;
    }
}