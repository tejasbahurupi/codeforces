#include <iostream>
#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <vector>
#include <set>
#include <algorithm>
#include <string.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int knight;
    cin >> knight;

    while (knight--)
    {
        long long ayush, k;
        cin >> ayush >> k;

        vector<long long> costs(ayush);
        for (long long i = 0; i < ayush; ++i)
        {
            cin >> costs[i];
        }

        sort(costs.rbegin(), costs.rend());

        long long aliceScore = 0;
        long long bobScore = 0;

        for (long long i = 0; i < ayush; ++i)
        {
            if (i % 2 == 0)
            {
                aliceScore += costs[i];
            }
            else
            {
                bobScore += costs[i];
            }
        }

        long long initialScore = aliceScore - bobScore;
        long long possibleIncrease = 0;

        for (long long i = 1; i < ayush; i += 2)
        {
            long long chota = costs[i - 1] - costs[i];

            if (chota > 0)
            {
                long long increase = min(chota, k);
                possibleIncrease += increase;
                k -= increase;
            }
        }

        long long minScore = initialScore - possibleIncrease;
        cout << minScore << endl;
    }

    return 0;
}