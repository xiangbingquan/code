#include<bits/stdc++.h>
#define int long long
using namespace std;

// int lowbit(int x)
// {
//     return x&-x;
// }

map<int,int>mi;

void pre()
{
    for(int i=0;i<=32;i++)
    {
        int x=1;
        mi[x<<i]=i;
    }
}

void solve()
{
    int n;
    cin>>n;
    vector<int>a(n);
    map<int,int>res;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=res[a[i]];
        res[a[i]]++;
        if(a[i]==1)
        {
            sum+=res[2];
        }
        else if(a[i]==2)
        {
            sum+=res[1];
        }
    }
    cout<<sum<<'\n';
}

signed main()
{
    ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
    int T;
    cin>>T;
    pre();
    while(T--)
    {
        solve();
    }
    return 0;
}