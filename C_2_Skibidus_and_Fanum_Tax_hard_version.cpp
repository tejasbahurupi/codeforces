#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef long long ll;

// Function to compute prefix sum score of an array
ll compute_prefix_sum_score(vector<int>& arr) {
    sort(arr.begin(), arr.end()); // Sort array in ascending order
    ll sum = 0, prefix_sum = 0;
    for (int num : arr) {
        prefix_sum += num;
        sum += prefix_sum;
    }
    return sum;
}

void solve() {
    int n, m;
    cin >> n >> m;
    vector<pair<ll, vector<int>>> arrays(n);
    
    for (int i = 0; i < n; i++) {
        vector<int> arr(m);
        for (int j = 0; j < m; j++) {
            cin >> arr[j];
        }
        ll score = compute_prefix_sum_score(arr);
        arrays[i] = {score, arr};
    }
    
    // Sort arrays in descending order of prefix sum score
    sort(arrays.rbegin(), arrays.rend());
    
    // Compute final score
    ll total_score = 0, cumulative_sum = 0;
    for (auto& [score, arr] : arrays) {
        for (int num : arr) {
            cumulative_sum += num;
            total_score += cumulative_sum;
        }
    }
    
    cout << total_score << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
