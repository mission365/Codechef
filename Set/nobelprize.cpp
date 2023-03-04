#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        ll x;
        unordered_set<int> s;
        for(int i=0;i<n;i++){
            cin>>x;
            s.insert(x);
        }
        if(s.size()<m) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
