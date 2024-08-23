#include <bits/stdc++.h>

using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        if (k == 0)
        {
            cout << s << endl;
        }
        else
        {
            for (int i = 0; i < s.length(); i++)
            {
                if (s[i] == '1')
                {
                    s.erase(i, 1);
                    k--;
                    i--;
                }
                if (k == 0)
                    break;
            }
            if (k > 0)
            {
                s.erase(0, k);
            }
            cout << s << endl;
        }
    }
}