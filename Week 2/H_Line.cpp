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
        int n;
        cin >> n;
        string s;
        cin >> s;
        ll ans = 0;
        vector<ll> a;
        for (int i = 0; i < n; i++)
        {
            int lcnt = i;
            int rcnt = n - 1 - i;

            if (s[i] == 'L')
            {
                ans += lcnt;
                a.push_back(max(lcnt, rcnt) - lcnt);
            }
            else
            {
                ans += rcnt;
                a.push_back(max(lcnt, rcnt) - rcnt);
            }
        }

        sort(a.begin(), a.end(), greater<ll>());
        for (int i : a)
        {
            ans += i;
            cout << ans << " ";
        }
        cout << endl;
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