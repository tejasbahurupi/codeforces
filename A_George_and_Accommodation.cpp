#include <bits/stdc++.h>
#include <iostream>
#define pb push_back
#define ll long long
using namespace std;

void solve()
{
    ll int n;
    cin >> n;
    ll int cnt = 0;
    for (ll int i = 0; i < n; i++)
    {
        ll int x, y;
        cin >> x >> y;
        (y - x > 1) ? cnt++ : 0;
    }
    cout << cnt << endl;
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