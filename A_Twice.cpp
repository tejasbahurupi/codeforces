#include<bits/stdc++.h>
#include <iostream>
#include <cstdio>
#define pb push_back
#define ll long long
using namespace std;
 
void solve(){
    int score=0;
    int n;
    cin>>n;
    vector<int> a(n);
    map<int,int> m;
    for(int i=0;i<n;i++){
        cin>>a[i];
        m[a[i]]++;
    }
    for (const auto &pair : m) {
        score += pair.second/2;
    }
    cout<<score<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
        solve();
    return 0;
}