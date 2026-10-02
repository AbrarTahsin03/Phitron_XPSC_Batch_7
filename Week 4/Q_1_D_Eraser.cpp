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
        int n, k;
        string s;
        cin >> n >> k >> s;

        int r = 0, cnt = 0;
        while (r < n)
        {
            if (s[r] == 'B')
            {
                r += min(k, n - r);
                cnt++;
            }
            else
                r++;
        }

        cout << cnt << nl;
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