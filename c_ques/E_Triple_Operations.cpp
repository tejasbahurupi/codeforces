#include <iostream>
#include <bits/stdc++.h>
#include <stack>
#include <queue>
#include <vector>
#include <algorithm>
#include <string.h>
#include <math.h>
#define pb push_back
#define ll long long
using namespace std;
vector<ll int> threepow(200000);

void three(){
    ll int cnt=0;
    
    for(ll int i = 3; i < 200000; i++){
        while(i>0){
            i = i/3;
            cnt++;
        }
        threepow[i] = cnt;
    }
}


void solve()
{
    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    void three();
    while (t--)
    {
        solve();
    }
    return 0;
}