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
        ll n;
        cin >> n;
        vector<ll> a(n);
        map<int, int> mp;

        for (auto &x : a)
            cin >> x, mp[x]++;

        ll ans = 0;
        ll prev = 0;
        sort(all(a));

        for (auto i : a)
        {
            ll cur = i;
            if (mp[cur] != 0)
            {
                ans++;
                while (mp[cur] > 0)
                    mp[cur]--, cur++;
            }
        }
        cout << ans << nl;
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