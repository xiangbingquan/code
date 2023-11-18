#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int k;
    string s;
    cin >> k >> s;
    vector<int> ans;
    if (s.size() % 2 == 1)
    {
        cout << -1 << '\n';
        return;
    }
    else
    {
        string t = "01";
        int l = 0, r = k - 1;
        while (l < r)
        {
            if (s[l] != s[r])
            {
                l++, r--;
                continue;
            }
            if (s[l] == '1')
            {
                ans.push_back(l);
                s.insert(l, t);
                r += 2;
            }
            else
            {
                ans.push_back(r + 1);
                s.insert(r + 1, t);
                r += 2;
            }
            if(ans.size()>=300)
            {
                cout<<-1<<'\n';
                return ;
            }
        }
    }
    if (ans.size() >= 300)
    {
        cout << -1 << '\n';
    }
    else
    {
        cout << ans.size() << '\n';
        for (auto x : ans)
            cout << x << ' ';
        cout << '\n';
    }
}

int main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int T = 1;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}