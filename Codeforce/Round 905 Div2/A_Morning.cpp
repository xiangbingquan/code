#include <bits/stdc++.h>

using namespace std;

map<char,int>res;

void init()
{
    for(int i=1;i<=9;i++)
    {
        res[i+'0']=i;
    }
    res['0']=10;
}

void solve()
{
    string s;
    cin >> s;
    int cnt = 0;
    char now = '1';
    for (int i = 0; i < s.size(); i++)
    {
        cnt+=abs(res[s[i]]-res[now])+1;
        now = s[i];
    }
    cout << cnt << '\n';
}

int main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    init();
    int T = 1;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}