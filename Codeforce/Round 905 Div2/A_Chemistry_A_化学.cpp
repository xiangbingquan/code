#include<bits/stdc++.h>

using namespace std;

void solve()
{
    int n,k;
    string s;
    cin>>n>>k>>s;
    map<char,int>res;
    for(auto x:s)
    {
        res[x]++;
    }
    int cnt=0;
    for(auto x:res)
    {
        if(x.second&1)
        {
            cnt++;
        }
    }
    n=n-k;
    if(n%2==0)
    {
        if(k-cnt>=0&&(k-cnt)%2==0)
        {
            cout<<"YES"<<'\n';
        }
        else
        {
            cout<<"NO"<<'\n';
        }
    }
    else
    {
        if(k+1-cnt>=0)
        {
            cout<<"YES"<<'\n';
        }
        else
        {
            cout<<"NO"<<'\n';
        }
    } 

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