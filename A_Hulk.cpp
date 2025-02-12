#include <bits/stdc++.h>
#include <iostream>
#define pb push_back
#define ll long long
using namespace std;

void solve()
{
    ll int n;
    cin >> n;
    for (ll int i = 1; i < n; i++)
    {
        cout << ((i & 1) ? "I hate that " : "I love that ");
    }
    cout << ((n & 1) ? "I hate it" : "I love it") << endl;
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