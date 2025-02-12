#include<bits/stdc++.h>
#include <iostream>
#include <cstdio>
#define pb push_back
#define ll long long
using namespace std;
 
void solve(){
    ll int k;
    cin>>k;
    vector<ll int> a(k);
    set<ll int> s;
    for(ll int i=0;i<k;i++){
        cin>>a[i];
        s.insert(a[i]);
    }
    k-=2;
    for (auto it = s.begin(); it != s.end(); ++it) {
        if(k%(*it)==0){
            if(s.find(k/(*it))!=s.end()){
                cout<<*it<<" "<<k/(*it)<<endl;
                return;
            }
        }
    }

    
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