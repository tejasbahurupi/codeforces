#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define MOD 1000000007

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    ll int left = 0;
    ll int maxCards = 0;
    unordered_map<int, int> countMap;
    int distinctCount = 0;

    for (int right = 0; right < n; ++right)
    {
        if (countMap[a[right]] == 0)
        {
            distinctCount++;
        }
        countMap[a[right]]++;

        while (distinctCount > k)
        {
            countMap[a[left]]--;
            if (countMap[a[left]] == 0)
            {
                distinctCount--;
            }
            left++;
        }

        if (right > 0 && (a[right] == a[right - 1] || a[right] == a[right - 1] + 1))
        {
            maxCards = max(maxCards, right - left + 1LL);
        }
        else
        {
            left = right;
        }
    }

    cout << maxCards << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
