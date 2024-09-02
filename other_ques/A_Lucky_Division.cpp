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
    int luckynumbers[14] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 777, 774};
    if (n % 4 == 0 || n % 7 == 0)
    {
        cout << "YES" << endl;
        return;
    }
    string s = to_string(n);
    int luckyno = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '4' || s[i] == '7')
            luckyno++;
    }
    if (luckyno == s.length())
    {
        cout << "YES" << endl;
        return;
    }
    for (int i = 0; i < 14; i++)
    {
        if (n % luckynumbers[i] == 0)
        {
            cout << "YES" << endl;
            return;
        }
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