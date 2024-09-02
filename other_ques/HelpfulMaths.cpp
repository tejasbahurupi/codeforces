#include<bits/stdc++.h>
// #include<vector>
// #include<algorithm>
using namespace std;

int main(){
    string s;
    cin>>s;
    vector<int> a;
    
    int n;
    for(int i=0;i<s.length();i=i+2){
        stringstream ss;
        ss << s.at(i);
        ss>>n;
        a.push_back(n);
    }
    sort(a.begin(),a.end());
    cout<<a[0];
    for(int i=1;i<a.size();i++){
        cout<<"+"<<a[i];
    }
    cout<<endl;
    
    return 0;
}

