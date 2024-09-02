#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == n)
                a[i] = 1;
            else
            {
                a[i] += 1;
            }
            cout << a[i] << " ";
        }
        cout << endl;
    }
}