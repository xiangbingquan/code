#include<bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin>>n;
    if((n-1)%3==0||(n+1)%3==0)
    {
        cout<<"First"<<'\n';
    }
    else
    {
        cout<<"Second"<<'\n';
    }
}

int main()
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