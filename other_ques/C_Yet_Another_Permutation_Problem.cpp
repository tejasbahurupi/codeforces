#include<iostream>
#include<bits/stdc++.h>
#include<stack>
#include<queue>
#include<vector>
#include<algorithm>
#include<string.h>
#include<math.h>
#define pb push_back
#define ll long long
using namespace std;
 
void solve(){
    int n;
    cin>>n;
    vector<int> d(n);
    for(int i=0;i<=n;i++){
        d[i]= __gcd(i+1,(i+1)%n);
        
    }
    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
   }
    return 0;
}