#include <iostream>
#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <vector>
#include <algorithm>
#include <string.h>
#define ll long long
using namespace std;

int main()
{
    string s;
    cin >> s;
    string ans;
    for (auto x : s)
    {
        if (x == 'A' || x == 'O' || x == 'Y' || x == 'E' || x == 'U' || x == 'I' || x == 'a' || x == 'o' || x == 'y' || x == 'e' || x == 'u' || x == 'i')
        {
            continue;
        }
        else
        {
            ans += '.';
            ans += tolower(x);
        }
    }
    cout << ans << endl;
    return 0;
}