#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
#define tt(x) \
    ll x;     \
    cin >> x; \
    while (x--)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve()
{
    tt(t)
    {
        string s;
        cin >> s;
        map<int, int> idx;
        stack<int> up, low;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'B')
            {
                if (!up.empty())
                {
                    idx.erase(up.top());
                    up.pop();
                }
            }
            else if (s[i] == 'b')
            {
                if (!low.empty())
                {
                    idx.erase(low.top());
                    low.pop();
                }
            }
            else
            {
                idx[i]++;
                if (s[i] >= 'A' && s[i] <= 'Z')
                    up.push(i);
                else
                    low.push(i);
            }
        }

        for (auto [x, y] : idx)
            cout << s[x];

        cout << nl;
    }

    return;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}