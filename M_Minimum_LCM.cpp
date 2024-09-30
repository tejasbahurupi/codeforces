#include <bits/stdc++.h>
#define ll long long
using namespace std;

long long gcd(long long int a, long long int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Function to return LCM of two numbers
long long lcm(ll int a, ll int b)
{
    return (a / gcd(a, b)) * b;
}

int main()
{
    ll int t;
    cin >> t;
    while (t--)
    {
        ll int fa, fb;
        ll int ans;
        ll int n;
        cin >> n;
        ans = 1;
        for (ll int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                ans = n / i;
                break;
            }
        }
        cout << ans << " " << n - ans << endl;
    }
    return 0;
}