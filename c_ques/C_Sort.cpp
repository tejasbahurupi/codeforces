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
        int n, q;
        cin >> n >> q;
        string a, b;
        cin >> a >> b;
        int l[q], r[q];
        for (int i = 0; i < q; i++)
        {
            cin >> l[i] >> r[i];
            l[i]--;
            r[i]--;
        }
    }
    return 0;
}