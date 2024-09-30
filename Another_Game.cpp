#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int find_min_K(int N, vector<int> &P)
{
    // Since we just need the size N to compute the result,
    // the minimum value of K is N + (N - 1)
    return N + (N - 1);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;

        vector<int> P(N);

        for (int i = 0; i < N; i++)
        {
            cin >> P[i];
        }

        // Calculate the minimum K
        int min_K = find_min_K(N, P);

        // Output the result
        cout << min_K << endl;
    }
    return 0;
}
