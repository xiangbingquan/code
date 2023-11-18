#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve()
{
    int n;
    string s;
    cin >> n >> s;

    int idx = s.size() - 1;
    bool flag = true;
    int res = 0;
    int l=0;
    for (int i = 1; i <= n; i++, idx--)
    {
        if (!flag)
        {
            cout << -1 << ' ';
            continue;
        }
        if (s[idx] == '0')
        {
            cout << res << ' ';
        }
        else
        {
            if(!l) l=idx;
            while (l > 0 && s[l] != '0')
            {
                l--;
            }
            if (s[l] == '1')
            {
                cout << -1 << ' ';
                flag = false;
            }
            else
            {
                s[l] = '1';
                res += idx - l;
                cout << res << ' ';
            }
        }
    }
    cout << '\n';
}
signed main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}