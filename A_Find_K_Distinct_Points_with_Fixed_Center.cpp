#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int xc, yc, k;
        cin >> xc >> yc >> k;
        if (k == 1)
        {
            cout << xc << " " << yc << endl;
        }
        else
        {

            for (int i = 1; i <= k / 2; ++i)
            {
                // cout << i << endl;
                cout << xc + i << " " << yc + i << endl;
                cout << xc - i << " " << yc - i << endl;
            }
            if (k % 2 == 1)
                cout << xc << " " << yc << endl;
        }
    }
    return 0;
}