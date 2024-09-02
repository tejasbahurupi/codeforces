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
    ll int x;
    cin >> x;
    ll int ans = 0;
    int cnt9 = 0;
    stack<int> stack;
    while (x > 0)
    {
        // cout << x % 10 << endl;
        if ((x % 10) <= 4)
        {
            stack.push(x % 10);
        }
        else
        {
            stack.push(9 - (x % 10));
        }
        x = x / 10;
    }
    if (stack.top() == 0)
    {
        ans += 9;
        stack.pop();
    }
    while (!stack.empty())
    {
        ans *= 10;
        ans += stack.top();
        stack.pop();
    }
    cout << ans << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}