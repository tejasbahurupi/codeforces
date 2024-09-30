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

bool isPrime(ll int n)
{

    // If the number is less than or equal to 1, it is not
    // prime
    if (n <= 1)
    {
        return false;
    }

    // Check for divisors from 2 to n-1
    for (ll int i = 2; i < n; i++)
    {

        // If n is divisible by any number in this range, it
        // is not prime
        if (n % i == 0)
        {
            return false;
        }
    }

    // If no divisors are found, it is prime
    return true;
}

void solve()
{
    ll int n, k;
    cin >> n >> k;
    vector<ll int> a(n);
    ll int cnt = INT_MAX;
    for (ll int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (k != 4)
    {
        for (ll int i = 0; i < n; i++)
        {
            if (a[i] % k == 0)
            {
                cout << 0 << endl;
                return;
            }
            else
            {
                cnt = min(cnt, k - (a[i] % k));
            }
        }
        cout << cnt << endl;
    }
    else
    {
        ll flag = 0;
        ll flag2 = 0;
        for (ll int i = 0; i < n; i++)
        {
            if (a[i] % k == 0)
            {
                cout << 0 << endl;
                return;
            }
            else
            {
                if (a[i] & 1)
                {
                    flag++;
                }
                else
                {
                    flag2++;
                }
                if (flag >= 2)
                {
                    cnt = min(cnt, (ll)2);
                }
                if (flag2 >= 2)
                {
                    cnt = 0;
                    cnt = min(cnt, (ll)0);
                }
                cnt = min(cnt, k - a[i] % k);
            }
        }
        if (flag2 == 1)
        {
            cnt = 1;
        }
        cout << cnt << endl;
    }
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