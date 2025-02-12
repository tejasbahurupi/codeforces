#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, double> a1, pair<int, double> a2)
{
    return a1.second > a2.second;
}

void knapsack(int cap, vector<int> weights, vector<int> profits, int n)
{
    vector<pair<int, double>> r;

    for (int i = 0; i < n; i++)
    {
        r.push_back({i, (double)profits[i] / weights[i]});
    }

    sort(r.begin(), r.end(), cmp);
    reverse(r.begin(), r.end());

    int currwt = 0;

    int profit = 0;

    for (int i = 0; i < n; i++)
    {
        int wt = weights[r[i].first];
        if (currwt + wt <= cap)
        {
            currwt += wt;
            profit += profits[r[i].first];
            cout << r[i].first + 1 << endl;
        }
        else
        {
            profit += (cap - currwt) * r[i].second;
        }
    }
}

int main()
{
    vector<int> weights = {10, 20, 30};  // Weights of items
    vector<int> values = {60, 100, 120}; // Values of items

    int n = weights.size();

    knapsack(W, weights, values, n);

    return 0;
}