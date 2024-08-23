#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    vector<char> a;
    cin>>s;
    int cnt=0;
    sort(s.begin(),s.end());
    for(int i=1;i<s.length();i++){
        if(s[i]!=s[i-1]){
            cnt++;
        }
    }
    if(cnt%2 ==0 )
        cout<<"IGNORE HIM!"<<endl;
    else
        cout<<"CHAT WITH HER!"<<endl;
}   