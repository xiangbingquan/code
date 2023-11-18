#include <bits/stdc++.h>

using namespace std;

multiset<int>lnum;
multiset<int>rnum;

void solve()
{
    string s;
    int l, r;
    cin >> s >> l >> r;
    if (s == "+")
    {
        lnum.insert(l);
        rnum.insert(r);
        if (*(lnum.rbegin()) > *(rnum.begin()))
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
        
    }
    else
    {
        lnum.erase(lnum.find(l));
        rnum.erase(rnum.find(r));
        if (lnum.size()&&*(lnum.rbegin()) > *(rnum.begin()))
        {
            cout << "YES" << '\n';
        }
        else
        {
            cout << "NO" << '\n';
        }
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