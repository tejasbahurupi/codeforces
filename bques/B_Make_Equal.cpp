#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        bool flag = true;
        long long int a[n],sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum += a[i];
        }
        long long int avg = sum/n,exc=0;
        for(int i=0;i<n;i++){
            if(a[i]>=avg)
                exc += (a[i]-avg); 
            else{
                exc -= (avg-a[i]);
            }
            if(exc <0){
                flag = false;
                break;
            }
        }
        if(exc==0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}