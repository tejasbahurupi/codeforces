#include <iostream>
#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <vector>
#include <algorithm>
#include <string.h>
#define ll long long
using namespace std;

void fillPrefixSum(ll int arr[], int n, ll int prefixSum[])
{
    prefixSum[0] = arr[0];
    // Adding present element with previous element
    for (int i = 1; i < n; i++)
        prefixSum[i] = prefixSum[i - 1] + arr[i];
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long int score = 0;
        long long int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        string s;
        cin >> s;
        long long int prefixSum[n];

        // Function call
        fillPrefixSum(a, n, prefixSum);
        int ptr1 = 0, ptr2 = n - 1;
        while (ptr1 < ptr2)
        {
            if (s[ptr1] != 'L')
            {
                ptr1++;
            }
            else
            {
                if (s[ptr2] != 'R')
                {
                    ptr2--;
                }
                else
                {
                    if (ptr1 != 0)
                        score += prefixSum[ptr2] - prefixSum[ptr1 - 1];
                    else
                        score += prefixSum[ptr2];
                    ptr1++;
                    ptr2--;
                }
            }
        }
        cout << score << endl;
    }
    return 0;
}