#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#define pb push_back
#define ll long long
using namespace std;

void solve()
{
    ll int n, m;
    cin >> n >> m;
    multiset<ll int> set;
    for (ll int i = 0; i < n; i++)
    {
        ll int x;
        cin >> x;
        set.insert(x);
    }
    for (ll int i = 0; i < m; i++)
    {
        ll int y;
        cin >> y;
        multiset<ll int>::iterator itr = set.upper_bound(y);
        if (itr == set.begin())
        {
            cout << -1 << endl;
        }
        else
        {
            itr--;
            cout << *itr << endl;
            set.erase(itr);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // int t;
    // cin>>t;
    // while(t--)
    solve();
    return 0;
}