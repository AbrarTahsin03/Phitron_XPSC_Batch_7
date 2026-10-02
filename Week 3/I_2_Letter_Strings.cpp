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
        vector<string> a(n);
        for (auto &x : a)
            cin >> x;

        map<char, ll> idx1, idx2;
        map<string, ll> freq;

        for (auto s : a)
        {
            idx1[s[0]]++, idx2[s[1]]++;
            freq[s]++;
        }

        ll ans = 0;
        for (auto s : a)
        {
            ans += idx1[s[0]] - 1;
            ans += idx2[s[1]] - 1;
            ans -= (freq[s] - 1) * 2;
        }
        cout << ans / 2 << nl;
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