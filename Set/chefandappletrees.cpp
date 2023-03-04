#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        //ll a[n];
        ll x;
        set<int> s;
        for(int i=0;i<n;i++){
            cin>>x;
            s.insert(x);
        }
        cout<<s.size()<<endl;
    }
}
