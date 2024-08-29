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
    ll int cnt0 = 0;
    ll int cnt1 = 0;
    char s;
    string ans;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (s == '(')
        {
            ans += s;
            cnt0++;
        }
        else if (s == '_' && cnt0 > 0)
        {
            ans += ')';
            cnt0--;
        }
        else
        {
            ans += s;
        }
    }
    // cout << ans << endl;
    for (int i = n - 1; i >= 0; --i)
    {
        if (ans[i] == ')')
        {
            cnt1++;
        }
        else if (ans[i] == '_' && cnt1 > 0)
        {
            ans[i] = '(';
            cnt1--;
        }
    }
    // cout << ans << endl;
    stack<pair<char, int>> st;
    ll int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (ans[i] == '(')
        {

            st.push(make_pair(ans[i], i));
        }
        else if (ans[i] == ')' && st.top().first == '(')
        {
            sum += (i - st.top().second);
            st.pop();
        }
        else
        {

            st.push(make_pair(ans[i], i));
        }
    }
    cout << sum << endl;
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