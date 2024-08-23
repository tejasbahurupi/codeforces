#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    const long long MOD = 1000000007;
    while (t--)
    {
        ll int n, k;
        cin >> n >> k;
        ll sum = 0;
        vector<ll int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        sort(a.begin(), a.end());

        ll int i = 0;
        while (k != 0)
        {

            sum += a[0];
            a[0] += a[0];
            k--;
            while (a[i] > a[i + 1])
            {
                swap(a[i], a[i + 1]);
                i++;
            }
        }

        sum = sum % MOD;
        cout << sum << endl;
    }
}
