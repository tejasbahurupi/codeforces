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

void fillPrefixSum(const std::vector<long long int> &arr, std::vector<long long int> &prefixSum)
{
    int n = arr.size();
    prefixSum[0] = arr[0];
    // Adding present element with previous element
    for (int i = 1; i < n; i++)
        prefixSum[i] = prefixSum[i - 1] + arr[i];
}

void solve()
{
    ll int n, m;
    cin >> n >> m;
    vector<ll int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    if (a[0] > m)
    {
        cout << 0 << endl;
        return;
    }

    // for (int i = 0; i < n; i++)
    // {
    //     /* code */
    //     cout << a[i] << " ";
    // }
    // cout << endl;

    ll int max_petals = 0, petals = 0;

    ll int left = 0, right = 0;
    while (right < n)
    {
        if (a[right] - a[left] <= 1 && petals + a[right] <= m)
        {
            petals += a[right];
            right++;
        }
        else
        {
            petals -= a[left];
            left++;
        }
        max_petals = max(max_petals, petals);
    }
    cout << max_petals << endl;
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