#include<bits/stdc++.h>
#define int long long
using namespace std;

int sum(int x)
{
    int res=0;
    while(x)
    {
        res+=x%10;
        x/=10;
    }
    return res;
}

void solve()
{
    int x,k;
    cin>>x>>k;
    for(int i=x;;i++)
    {
        if(sum(i)%k==0)
        {
            cout<<i<<'\n';
            return ;
        }
    }


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