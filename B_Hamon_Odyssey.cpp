#include <iostream>
#include <vector>
using namespace std;
#define ll long long
#define ull unsigned long long
#define pb(e) push_back(e)
#define sv(a) sort(a.begin(), a.end())
#define sa(a, n) sort(a, a + n)
#define mp(a, b) make_pair(a, b)
#define all(x) x.begin(), x.end()

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int cur = arr[0];
    int part = 1;
    for (int i = 0; i < n; i++)
    {
        cur &= arr[i];
        if (cur == 0)
        {
            if (i == n - 1)
                break;
            part++;
            cur = arr[i + 1];
        }
    }
    if (cur != 0)
        part--;
    part = max(part, 1);
    cout << part << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}