#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        int n,a,b,c,d;
        cin>>n>>a>>b>>c>>d;
        int n_way=abs(a-c)+abs(b-d);
        
        int first = min(min(a,(n-a+1)),min(b,(n-b+1)));

        int last = min(min(c,(n-c+1)),min(d,(n-d+1)));

        int a_way = first+last;
        
        int ans=min(n_way,a_way);
        
        cout<<ans<<endl;
    }
}
