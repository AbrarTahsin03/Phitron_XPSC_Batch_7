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
    int n, m;
    cin >> n >> m;

    vector<int> v(n + 1);

    for (int i = 1; i <= n; i++)
        cin >> v[i];
    map<int, int> mp;
    set<int> s;

    for (int i = n; i > 0; i--)
    {
        s.insert(v[i]);
        mp[i] = s.size();
    }

    while (m--)
    {
        int pos;
        cin >> pos;
        cout << mp[pos] << endl;
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