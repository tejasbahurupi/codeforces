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
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a;
        cin >> a;
        string s = to_string(a);
        if (s.length() < 3)
        {
            cout << "NO" << endl;
        }
        else
        {
            if (s[0] == '1' && s[1] == '0')
            {
                if (s[2] == '0')
                {
                    cout << "NO" << endl;
                }
                else
                {
                    s.erase(0, 2);
                    a = stoi(s);
                    if (a > 1)
                    {

                        cout << "YES" << endl;
                    }
                    else
                        cout << "NO" << endl;
                }
            }
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}