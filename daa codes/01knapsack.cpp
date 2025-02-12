#include <bits/stdc++.h>
using namespace std;

void knapsack(int cap, vector<int> weights, vector<int> profits, int n)
{
    vector<vector<int>> dp(n + 1, vector<int>(cap + 1));

    for (int i = 1; i < n + 1; i++)
    {
        for (int w = 1; w < cap + 1; w++)
        {
            if (w >= weights[i])
                dp[i][w] = max(dp[i - 1][w], dp[i - 1][w - weights[i]] + profits[i]);
            else
                dp[i][w] = dp[i - 1][w];
        }
    }
    int w = cap;
    vector<int> selected(n);
    for (int i = n; i >= 0 && w > 0; i--)
    {
        if (dp[i][w] != dp[i - 1][w])
        {
            selected[i] = 1;
            w -= weights[i];
        }
    }
    for (auto x : selected)
    {
        cout << x << " ";
    }
    cout << endl;

    cout << dp[n][cap] << endl;
}

int main()
{
    int capacity = 50;                    // Knapsack capacity
    vector<int> weights = {10, 20, 30};   // Weights of items
    vector<int> profits = {60, 100, 120}; // Values of items
    int n = weights.size();

    knapsack(capacity, weights, profits, n);

    return 0;
}