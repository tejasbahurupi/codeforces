#include <iostream>
#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <vector>
#include <algorithm>
#include <string.h>
#include <math.h>
#include <set>
#include <bitset>
#define pb push_back
#define ll long long
#define mod 10e9
using namespace std;

void solve()
{
    ll int x;
    cin >> x;
    ll int cnt = 0;
    bitset<32> binary(x);
    string s = binary.to_string();
    for (char x : s)
    {
        if (x == '1')
        {
            cnt++;
        }
    }
    cout << cnt << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}