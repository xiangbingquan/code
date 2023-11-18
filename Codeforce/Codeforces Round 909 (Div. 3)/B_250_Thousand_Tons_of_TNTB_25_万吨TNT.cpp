#include<bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int>a(n);
    vector<int>sum(n,0);
    vector<int>res;
    for(auto &x:a) cin>>x;
    sum[0]=a[0];
    for(int i=1;i<n;i++)
    {
        sum[i]=sum[i-1]+a[i];
        if(n%i==0) res.push_back(i);
    }
    int ans=0;
    for(auto x:res)
    {
        set<int>temp;
        for(int i=0;i<n;i+=x)
        {
            if(i-1<0)
            {
                temp.insert(sum[i+x-1]);
            }
            else
            {
                temp.insert(sum[i+x-1]-sum[i-1]);
            }
        }
        ans=max(ans,*temp.rbegin()-*temp.begin());
    }
    cout<<ans<<'\n';
}

/**
 *1 2 3 3 6 10
 **/ 
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