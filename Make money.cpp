#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,x,c;
    cin>>n>>x>>c;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int sum1=0,sum2=0,count=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<=x)
        {
            int net = x-a[i];
            int profit = net - c;
            if(profit>0)
            {
                count++;
                a[i]=x;
                sum1 = sum1+a[i];
            }
            else
            {
                sum2=a[i]+sum2;
            }
        }
        else
        {
            continue;
        }
    }
    int total_sum=sum1+sum2;
    cout<<total_sum-(count*c)<<endl;
    
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
