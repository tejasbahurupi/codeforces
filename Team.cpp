#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,cnt=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int p,v,t;
        cin>>p>>v>>t;
        int sum =0;
        sum = p+v+t;
        if(sum>1){
            cnt++;
        }
    }
    cout<<cnt<<endl;
}