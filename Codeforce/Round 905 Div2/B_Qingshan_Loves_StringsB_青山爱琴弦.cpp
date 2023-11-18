#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;
    bool flag = true;
    for (int i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
        {
            flag = false;
            break;
        }
    }
    if (flag)
    {
        cout << "YES" << '\n';
        return;
    }

    for (int i = 1; i < m; i++)
    {
        if (t[i] == t[i - 1])
        {
            cout << "NO" << '\n';
            return;
        }
    }
    for (int i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
        {
            if (t[0] == s[i - 1])
            {
                cout << "No" << '\n';
                return;
            }
            if (t.back() == s[i])
            {
                cout << "No" << '\n';
                return;
            }
        }
    }
    cout << "YES" << '\n';
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