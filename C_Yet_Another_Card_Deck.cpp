#include <bits/stdc++.h>
#include <iostream>
#define pb push_back
#define ll long long
using namespace std;

void solve()
{
    ll int n, q;
    cin >> n >> q;
    vector<ll int> a(n);
    for (ll int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (ll int i = 0; i < q; i++)
    {
        ll int m;
        cin >> m;
        for (ll int j = 0; j < n; j++)
        {
            if (a[j] == m)
            {
                cout << j + 1 << " ";
                // cout << endl;
                rotate(a.begin(), a.begin() + j, a.begin() + j + 1);
                // for (auto x : a)
                // {
                //     cout << x << " ";
                // }
                // cout << endl;
                break;
            }
        }
    }
    cout << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // int t;
    // cin>>t;
    // while(t--){
    solve();
    //}
    return 0;
}