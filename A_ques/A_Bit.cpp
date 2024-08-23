#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
    int t,x;
    cin>>t;
    while(t--){
      string s;
      int y;
      cin>>s;
      if(s.at(1)=='+'){
        ++x;
      }else{
        --x;
      }
    }
cout<<x<<endl;
}


