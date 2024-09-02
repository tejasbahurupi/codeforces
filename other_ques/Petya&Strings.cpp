#include<bits/stdc++.h>
using namespace std;

int main(){
    string a,b;
    bool flag = false;
    cin>>a>>b;
    for(int i=0;i<a.length();i++){
        a[i]=tolower(a[i]);
    }
    for(int i=0;i<b.length();i++){
    b[i]=tolower(b[i]);
    }
    if(a.compare(b)==0){
        cout<<0<<endl;
        flag=true;
    }else{
    for(int i=0;i < min(a.length(),b.length());i++){
        if(a[i]==b[i]){
            continue;
    }else{
        if(a[i]>b[i]){
            flag = true;
            cout<<1<<endl;
            break;
        }else{
            flag =true;
            cout<<-1<<endl;
            break;
        }
    }
    }
}
if(!flag){
    if(a.length()>b.length()){
        cout<<-1<<endl;
    }else{
        cout<<1<<endl;
    }
}
}