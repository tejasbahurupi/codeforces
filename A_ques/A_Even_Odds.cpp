#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, k, odd, even;
    cin >> n >> k;
    odd = ceil(n / 2.0);
    even = n / 2;
    if (k <= odd)
    {
        cout << 2 * k - 1 << endl;
    }
    else
    {
        k = k - odd;
        cout << k * 2 << endl;
    }
}
