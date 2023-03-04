#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,x;
        cin>>n>>x;
        string s;
        cin>>s;
        unordered_set<int> uset;
        uset.insert(x);
        for(ll i=0;i<n;i++){
            if(s[i]=='L'){
                x=x-1;
                uset.insert(x);
            }
            else{
                x=x+1;
                uset.insert(x);
            }
        }
        cout<<uset.size()<<endl;
    }
}
