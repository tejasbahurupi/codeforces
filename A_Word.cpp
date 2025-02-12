#include <bits/stdc++.h>
#include <iostream>
#define pb push_back
#define ll long long
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    ll int cntA = 0, cntB = 0;
    for (ll int i = 0; i < n; i++)
        ((s[i] - 'A') > 26 ? cntB++ : cntA++);
    if (cntA > cntB)
    {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }
    else
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
    transform(s.begin(), s.end(), s.begin(), (cntA > cntB ? ::toupper : ::tolower));

    cout << s << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // int t;
    // cin>>t;
    // while(t--){
    solve();
    //}
    return 0;
}