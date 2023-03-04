#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        set<int> s;
        for(int i=0;i<n;i++){
            ll a;
            cin>>a;
            s.insert(a);
        }
        cout<<s.size()<<endl;
    }
}
