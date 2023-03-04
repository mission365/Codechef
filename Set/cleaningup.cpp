#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll m, n;
        cin >> m >> n;
        ll x;
        set<int> s;
        for (int i = 1; i <= m; i++)
        {
            s.insert(i);
        }
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            s.erase(x);
        }
        vector<int> v1(s.begin(), s.end());
        for (int i = 0; i < v1.size(); i += 2)
        {
            cout << v1[i] << " ";
        }
        cout << endl;
        if (v1.size() <= 1)
        {
            cout << -1 << endl;
        }
        else
        {
            for (int i = 1; i < v1.size(); i += 2)
            {
                cout << v1[i] << " ";
            }
            cout << endl;
        }
    }
}
