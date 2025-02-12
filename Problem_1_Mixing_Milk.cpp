// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    freopen("mixmilk.in", "r", stdin);
    freopen("mixmilk.out", "w", stdout);

    vector<ll int> milk(3), capacity(3);
    for (ll int i = 0; i < 3; i++)
        cin >> capacity[i] >> milk[i];

    for (ll int i = 0; i < 100; i++)
    {
        ll int bucket1 = i % 3;
        ll int bucket2 = (i + 1) % 3;

        ll int amt = min(milk[bucket1], capacity[bucket2] - milk[bucket2]);

        milk[bucket1] -= amt;
        milk[bucket2] += amt;
    }
    for (auto x : milk)
    {
        cout << x << endl;
    }
}
