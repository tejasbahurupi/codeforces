#include <iostream>
#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <vector>
#include <algorithm>
#include <string.h>
#include <math.h>
#define pb push_back
#define ll long long
using namespace std;

void solve()
{
    ll int n, b;
    ll int a;
    cin >> a >> b >> n;
    a = (a * 10) + 9;
    if (a % b <= 9)
    {
        a -= (a % b);
        cout << a;
        string s(n - 1, '0');
        cout << s << endl;
    }
    else
    {
        a = -1;
        cout << a << endl;
        return;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}