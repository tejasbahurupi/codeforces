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
    int n;
    cin >> n;
    string s1, s2;
    cin >> s1;
    cin >> s2;
    int cnt = 0;
    for (int i = 0; i < n - 2; i++)
    {
        if (s1[i] == 'x' && s1[i + 2] == 'x' && s2[i + 1] == '.' && s1[i + 1] == '.' && s2[i] == '.' && s2[i + 2] == '.')
        {
            cnt++;
        }
        if (s2[i] == 'x' && s2[i + 2] == 'x' && s1[i + 1] == '.' && s2[i + 1] == '.' && s1[i] == '.' && s1[i + 2] == '.')
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
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}