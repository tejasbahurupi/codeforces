#include <bits/stdc++.h>
#include <iostream>
#define pb push_back
#define ll long long
using namespace std;

void solve()
{
    ll int n;
    cin >> n;
    ll int suma = 0;
    ll int sumb = 0;
    ll int cnta = 0;
    ll int cntb = 0;

    for (ll int i = 0; i < n; i++)
    {
        ll int x;
        cin >> x;
        if (i & 1)
        {
            suma = max(x, suma);
            cnta++;
        }
        else
        {
            sumb = max(x, sumb);
            cntb++;
        }
    }
    // cout << suma << " " << sumb << endl;
    if (suma > sumb)
    {
        cout << suma + cnta << endl;
    }
    else if (suma == sumb)
    {
        if (cnta > cntb)
        {
            cout << suma + cnta << endl;
        }
        else
        {
            cout << sumb + cntb << endl;
        }
    }
    else
    {
        cout << sumb + cntb << endl;
    }
    // cout << max(suma, sumb) << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}