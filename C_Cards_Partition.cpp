#include <bits/stdc++.h>
#include <iostream>
#define pb push_back
#define ll long long
using namespace std;

void solve()
{
    ll int n, k;
    cin >> n >> k;
    vector<ll int> a(n + 1);
    ll int sum = 0;
    ll int maxa = 0;
    ll int ans = 0;
    for (ll int i = 1; i <= n; i++)
    {
        cin >> a[i];
        sum += a[i];
        maxa = max(maxa, a[i]);
    }
    for (ll int i = n; i > 0; i--)
    {
        ll int height = (sum + k) / i;
        if (height * i >= sum)
        {
            if (height >= maxa)
            {
                cout << i << endl;
                return;
            }
        }
    }
    cout << 1 << endl;
    // for(ll int i=0;i<n;i++){

    // }
    // // sort(a.begin(), a.end());
    // ans += k / p;
    // cout << ans << endl;
    // // sort(a.begin() + 1, a.end());
    // //  ll int ans = 0;
    // //  ll int x=n-1;
    // //  while(k>0){
    // //      if(a[x]<n){
    // //          if(n-a[x]<=k){
    // //              a[x] = n;
    // //              k -= (n-a[x]);
    // //              x--;
    // //          }
    // //      }
    // //  }
    // //  cout << 1 << endl;
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