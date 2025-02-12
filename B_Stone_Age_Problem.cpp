
#include <bits/stdc++.h>
#include <iostream>
#define pb push_back
#define ll long long
using namespace std;

void solve()
{
    ll int n, q;
    cin >> n >> q;
    vector<ll int> a(n), b(q, 0);
    ll int type2 = -1;
    ll sum = 0;
    for (ll int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    vector<ll int> updated;
    for (ll int i = 0; i < q; i++)
    {
        ll int x;
        cin >> x;
        if (x == 1)
        {
            ll int y, z;
            cin >> y >> z;
            if (type2 == -1)
            {
                sum -= a[y - 1];
                a[y - 1] = z;
                sum += z;
                updated.pb(y - 1);
            }
            else
            {
                if (b[y - 1] == 1)
                {
                    sum -= a[y - 1];
                    sum += z;
                    a[y - 1] = z;
                    updated.pb(y - 1);
                }
                else
                {
                    a[y - 1] = z;
                    sum -= type2;
                    sum += z;
                    b[y - 1] = 1;
                    updated.pb(y - 1);
                }
            }
        }
        else
        {
            ll int y;
            cin >> y;
            type2 = y;
            sum = n * y;
            for (ll int j = 0; j < updated.size(); j++)
            {
                b[updated[j]] = 0;
            }
            updated.clear();
        }
        cout << sum << endl;
    }
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