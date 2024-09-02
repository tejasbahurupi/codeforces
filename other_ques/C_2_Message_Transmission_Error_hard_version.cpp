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
    string s;
    cin >> s;
    int n = s.length();
    int m = n / 2;
    int subString = n - m;

    while (m > 0)
    {
        if (s.substr(0, subString) == s.substr(m, subString) && 2 * subString != n)
        {
            cout << "YES" << endl;
            cout << s.substr(0, subString) << endl;
            return;
        }
        m--;
        subString++;
    }
    cout << "NO" << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
    return 0;
}