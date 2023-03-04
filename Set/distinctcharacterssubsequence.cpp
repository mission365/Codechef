#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    while(t--){
        string str;
        cin>>str; 
        set<char> s;
        for(int i=0;i<str.size();i++){
            s.insert(str[i]);
        }
        cout<<s.size()<<endl;    
    }
}
