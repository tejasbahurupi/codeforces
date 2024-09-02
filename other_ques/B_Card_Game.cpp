#include <iostream>
#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <vector>
#include <algorithm>
#include <string.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;
        // a1 = max(a1, a2);
        // a2 = min(a1, a2);
        // b1 = max(b1, b2);
        // b2 = min(b1, b2);
        int ans = 0;
        if (a1 > b1 && a2 >= b2)
            ans += 2;
        else if (a2 > b2 && a1 >= b1)
            ans += 2;
        if (a1 > b2 && a2 >= b1)
            ans += 2;
        else if (a2 > b1 && a1 >= b2)
            ans += 2;

        cout << ans << endl;
    }
    return 0;
}