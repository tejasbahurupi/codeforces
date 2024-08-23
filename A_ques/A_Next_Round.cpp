#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, x = k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n, greater<int>());

    for (int i = 0; i < (n - k - 1); i++)
    {
        if (a[k + i] != a[k + i + 1])
        {
            break;
        }
        else
        {
            x++;
        }
    }
    cout << x << endl;
}