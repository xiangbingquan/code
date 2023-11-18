#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    map<int,int>res;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        res[x]++;
    }
    if(res.size()==1)
    {
        cout<<"Yes"<<'\n';
    }
    else if(res.size()==2)
    {
        auto x=res.begin();
        int num1=(*x).second;
        x++;
        int num2=(*x).second;
        if(abs(num1-num2)<=1)
        {
            cout<<"Yes"<<'\n';
        }
        else
        {
            cout<<"No"<<'\n';
        }
    }
    else
    {
        cout<<"No"<<'\n';
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