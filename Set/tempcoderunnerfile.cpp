#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a;
        set<int> s;
        for(int i=0;i<n;i++){
            cin>>a;
            s.insert(a);
        }
        cout<<s.size()<<endl;
    }
}
