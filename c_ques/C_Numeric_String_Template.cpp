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
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int m;
        cin >> m;
        vector<string> s(m);
        string x;
        for (int i = 0; i < m; i++)
        {
            cin >> s[i];
        }
        for (int i = 0; i < m; i++)
        {
            x = s[i];
            if (x.length() != n)
            {
                // cout << "next is length problem" << endl;
                cout << "NO" << endl;
                continue;
            }
            else
            {
                int flag = 0;
                map<char, long long int> mp;
                map<ll int, char> mp2;
                for (int j = 0; j < n; j++)
                {

                    if (mp.count(x[j]))
                    {
                        if (mp[x[j]] != a[j])
                        {
                            // cout << "next due to diff values" << endl;
                            cout << "NO" << endl;
                            flag = 1;
                            break;
                        }
                    }
                    else
                    {
                        mp[x[j]] = a[j];
                    }
                    if (mp2.count(a[j]))
                    {
                        if (mp2[a[j]] != x[j])
                        {
                            cout << "NO" << endl;
                            flag = 1;
                            break;
                        }
                        else
                        {
                            mp2[a[j]] = x[j];
                        }
                    }
                }
                if (flag == 0)
                    cout << "YES" << endl;
            }
        }

        // cout << "END" << endl;
    }
    return 0;
}
