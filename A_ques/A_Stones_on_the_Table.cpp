#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == s[i + 1])
        {
            s.erase(i + 1, 1);
            i--;
        }
    }
    cout << (n - s.length()) << endl;
}