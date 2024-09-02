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

ll int i = 0;
void printdigit(ll int n)
{
    if (n < 10)
    {
        cout << n << " ";
        return;
    }
    printdigit(n / 10);
    cout << n % 10 << " ";
}

void solve()
{
    ll int n;
    cin >> n;
    printdigit(n);
    cout << endl;
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