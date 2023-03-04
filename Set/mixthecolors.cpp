#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll x;
        unordered_set<int> us;
        for(int i=0;i<n;i++){
            cin>>x;
            us.insert(x);
        }
        if(us.size()==n) cout<<0<<endl;
        else cout<<n-us.size()<<endl;
    }
}
