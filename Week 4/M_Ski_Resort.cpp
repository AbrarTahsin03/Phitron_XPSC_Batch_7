#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define tt(x) \
    ll x;     \
    cin >> x; \
    while (x--)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    tt(t)
    {
        ll n, k, q;
        cin >> n >> k >> q;

        vector<ll> a(n);
        for (auto &x : a)
            cin >> x;

        ll l = 0;
        while (l < n && a[l] > q)
            l++;

        if (l == n || n - l < k)
            cout << 0;
        else
        {
            vector<ll> days;
            ll r = l, cnt = 0;
            while (r < n)
            {
                if (a[r] <= q)
                {
                    cnt++;
                    if (r == n - 1 && cnt >= k)
                        days.push_back(cnt);
                }
                else if (cnt >= k)
                {
                    days.push_back(cnt);
                    cnt = 0;
                }
                else
                    cnt = 0;
                r++;
            }
            ll ans = 0;
            for (ll i : days)
                ans += (i - k + 2) * (i - k + 1) / 2;
            cout << ans;
        }
        cout << nl;
    }

    return 0;
}