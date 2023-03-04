#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,x,y;
        cin>>n;
        set<int> x1;
        set<int> y1;
        for(int i=0;i<n;i++){
            cin>>x>>y;
            x1.insert(x);
            y1.insert(y);
        }
        cout<<x1.size()+y1.size()<<endl;   
    }
}
