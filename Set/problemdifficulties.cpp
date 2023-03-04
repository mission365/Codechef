#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll arr[4];
        set<int> s;
        for(int i=0;i<4;i++){
            cin>>arr[i];
            s.insert(arr[i]);
        }    
        if(s.size()==1) cout<<0<<endl;
        else if(s.size()==2){
            sort(arr,arr+4);
            if(arr[0]==arr[2] || arr[1]==arr[3]) cout<<1<< endl;
            else cout<<2<<endl;
        }
        else cout<<2<<endl;
    }
}
