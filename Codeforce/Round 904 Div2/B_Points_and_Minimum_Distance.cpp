#include <bits/stdc++.h>
#define int long long
using namespace std;

int get(int x)
{
    int cnt=0;
    while(x)
    {
        x/=10;
        cnt++;
    }
    return cnt;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    map<int,int>res[10];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        int t=a[i];
        int val=0;
        int cnt=0;
        while(t)
        {
            val=val+t%10;
            cnt++;
            t/=10;
        }
        res[cnt][val]++;
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
        int cnt=get(a[i]);
        for(int j=cnt/2+1;j<=cnt;j++)
        {
            int lsum=0;
            int rsum=0;
            int x=a[i];
            for(int k=cnt;k>=1;k--)
            {
                if(k>j)
                {
                    rsum+=x%10;
                    x/=10;
                }
                else
                {
                    lsum+=x%10;
                    x/=10;
                }
            }
            ans+=res[j-(cnt-j)][lsum-rsum];
        }
    }
    cout<<ans<<'\n';
}

signed main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int T;
    T = 1;
    while (T--)
    {
        solve();
    }
    return 0;
}