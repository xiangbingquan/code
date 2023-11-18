#include<bits/stdc++.h>

using namespace std;

void solve()
{
    int x,y,k;
    cin>>x>>y>>k;
    if(x>=y)
    {
        cout<<x<<'\n';
    }
    else 
    {
        if(x+k>=y)
        {
            cout<<y<<'\n';
        }
        else
        {
            cout<<y+y-(x+k)<<'\n';
        }
    }
}

int main()
{
    ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
    int T;
    cin>>T;
    while (T--)
    {
        solve();
    }
    
    return 0;
}