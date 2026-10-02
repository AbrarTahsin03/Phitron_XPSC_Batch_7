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
        int n, m;
        string s;
        cin >> n >> m >> s;

        set<int> indices;
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            --x;
            indices.insert(x);
        }
        string c;
        cin >> c;
        sort(rall(c));

        while (!indices.empty())
        {
            s[*indices.begin()] = c.back();
            c.pop_back();
            indices.erase(indices.begin());
        }
        cout << s << nl;
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