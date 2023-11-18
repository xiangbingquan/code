#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(auto &x:a) cin>>x;
    vector<int>f(n,0);
    f[0]=a[0];
    int ans=max((int)INT_MIN,f[0]);
    for(int i=1;i<n;i++)
    {
        f[i]=a[i];
        if(abs(a[i]%2)!=abs(a[i-1]%2))
        {
            f[i]=max(f[i],f[i-1]+a[i]);
        }
        ans=max(ans,f[i]);
    }
    cout<<ans<<'\n';
}

signed main()
{
    ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
    int T;
    cin>>T;
    while(T--)
    {
        solve();
    }
    return 0;
}