#include <iostream>
#include <vector>
#define ll long long
using namespace std;

int main()
{
    int t;
    cin >> t; // Number of test cases
    while (t--)
    {
        ll int n, s, m;
        cin >> n >> s >> m; // Read n (tasks), s (shower time), m (total minutes in a day)

        // If s is greater than the total minutes in a day, Alex cannot shower.
        if (s > m)
        {
            cout << "NO" << endl;
            continue;
        }

        // If there are no tasks, the entire day is free for Alex to shower.
        if (n == 0)
        {
            cout << "YES" << endl;
            continue;
        }

        vector<pair<ll int, ll int>> tasks(n);
        for (int i = 0; i < n; i++)
        {
            cin >> tasks[i].first >> tasks[i].second;
        }

        bool can_shower = false;

        // Check for free time before the first task.
        if (tasks[0].first >= s)
        {
            can_shower = true;
        }

        // Check for free time between consecutive tasks.
        for (int i = 0; i < n - 1; i++)
        {
            if (tasks[i + 1].first - tasks[i].second >= s)
            {
                can_shower = true;
                break;
            }
        }

        // Check for free time after the last task.
        if (m - tasks[n - 1].second >= s)
        {
            can_shower = true;
        }

        // Output the result based on the flag.
        if (can_shower)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
