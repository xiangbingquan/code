#include<bits/stdc++.h>

using namespace std;

void solve()
{
    int n,k;
    cin>>n>>k;
    vector<int>a(n+1,0);
    int cnt=0;
    int t=0;
    int r=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
        {
            cnt++;
        }
        if(a[i]%4==0)
        {
            t++;
        }
        if(a[i]==3||a[i]==7)
        {
            r++;
        }
    }
    if(k==2)
    {
        if(cnt>=1)
        {
            cout<<0<<'\n';
        }
        else
        {
            cout<<1<<'\n';
        }
        return ;
    }
    if(k==4)
    {
        if(cnt>=2||t)
        {
            cout<<0<<'\n';
        }
        else if(cnt==1||r)
        {
            cout<<1<<'\n';
        }
        else
        {
            cout<<2<<'\n';
        }
        return ;
    }
    int ans=INT_MAX;
    for(int i=1;i<=n;i++)
    {
        int l=1;
        while(l*k<a[i]) l++;
        ans=min(ans,l*k-a[i]);
    }
    cout<<ans<<'\n';
}

int main()
{
    ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
    int T=1;
    cin>>T;
    while(T--)
    {
        solve();
    }
    return 0;
}