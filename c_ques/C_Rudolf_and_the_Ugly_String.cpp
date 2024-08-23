#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        int cnt = 0;
        cin >> s;

        for (int i = 0; i < n - 2; i++)
        {

            if (s.at(i) == 'm' && s.at(i + 1) == 'a' && s.at(i + 2) == 'p')
            {
                cnt++;
            }
            if (s.at(i) == 'p' && s.at(i + 1) == 'i' && s.at(i + 2) == 'e')
            {
                cnt++;
            }
            if (i + 4 < n)
            {
                if (s.at(i) == 'm' && s.at(i + 1) == 'a' && s.at(i + 2) == 'p' && s.at(i + 3) == 'i' && s.at(i + 4) == 'e')
                {
                    cnt--;
                }
            }
        }
        cout << cnt << endl;
    }
}