#include<bits/stdc++.h>
#include <iostream>
#include <cstdio>
#define pb push_back
#define ll long long
using namespace std;
 
int main()
{
    vector<ll int> a = {13,46,24,52,20,9};
    ll int n = 6;
    for(ll int i=0;i<n;i++){
        ll int mine = i;
        for(ll int j=i+1;j<n;j++){
            if(a[j]<a[mine]){
                mine = j;
            }
        }
        swap(a[i],a[mine]);
    }
    for(auto x:a)cout<<x<<" ";
    cout<<endl;
    return 0;
}