#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
       vector<int> a;
       int element,asize;
       long long int sum=0;
       for(int i=0;i<4;++i){
            cin>>element;
            a.push_back(element);
            sum += element;
       }
       asize = a.size();
       if(a.size() == 2){
            if(a[0]<a[1])
                cout<<"NO"<<endl;
       }else{
    //     if(distance(a, max_element(a, a + asize)==a.size()))
    //         cout<<"NO"<<endl;
    //    }else{
    //     cout<<"YES"<<endl;
    //    }

       }
    }
}

