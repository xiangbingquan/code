#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
    int n,m;
    cin>>n>>m;
    vector<int>a(n+1);
    vector<double>b(n+1);
    for(int i=1;i<=n;i++)
    {
        cin>>a[i]>>b[i];
    }
    vector<double>sum1(n+1,1);
    vector<double>sum2(n+1,0);
    for(int i=1;i<=n;i++)
    {
        if(a[i]==1)
        {
            sum1[i]=sum1[i-1]*b[i];
            sum2[i]=sum2[i-1];
        }
        else
        {
            sum2[i]=sum2[i-1]+b[i];
            sum1[i]=sum1[i-1];
        }
    }

    for(int i=1;i<=m;i++)
    {
        int st,ed;
        cin>>st>>ed;
        int x,y;
        cin>>x>>y;
        double k=sum1[ed]/sum1[st-1];
        double xuan=sum2[ed]-sum2[st-1];
        cout<<fixed<<setprecision(3)<<(x*cos(xuan)-y*sin(xuan))*k<<' '<<(x*sin(xuan)+y*cos(xuan))*k<<'\n';
    }
    return 0;
}