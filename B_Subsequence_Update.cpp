#include <iostream>
#include <cstdio>
#define pb push_back
#define ll long long

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long int n, l, r, ans = 0;
    cin >> n >> l >> r;
    l--;
    r--;

    vector<long long int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    long long k = r - l + 1;

    vector<ll> first(v.begin(), v.begin() + r + 1);
    sort(first.begin(), first.end());
    long long sum1 = accumulate(first.begin(), first.begin() + k, 0LL);

    vector<ll> second(v.begin() + l, v.end());
    sort(second.begin(), second.end());
    long long sum2 = accumulate(second.begin(), second.begin() + k, 0LL);

    // Print the minimum of the two sums
    cout << min(sum1, sum2) << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}
