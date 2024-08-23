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
    string h = "hello";
    string ans = "";
    map<char, int> mp;
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == h[j])
        {
            ans += s[i];
            j++;
        }
    }
    // cout << "here" << endl;
    if (ans == h)
        cout << "YES" << endl;
    else
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