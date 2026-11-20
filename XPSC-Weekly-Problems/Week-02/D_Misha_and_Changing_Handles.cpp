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
    int n;
    cin >> n;

    map<string, string> mp;

    while (n--)
    {
        string a, b;
        cin >> a >> b;
        if (mp[a].empty())
        {
            mp[b] = a;
        }
        else
        {
            string s = mp[a];
            mp.erase(a);
            mp[b] = s;
        }
    }

    cout << mp.size() / 2 << endl;
    for (auto i : mp)
    {
        if (!i.second.empty())
            cout << i.second << " " << i.first << endl;
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