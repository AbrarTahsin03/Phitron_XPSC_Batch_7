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
        for (auto &x : a)
            cin >> x;

        priority_queue<ll> pq;
        ll my_army = 0;
        for (ll i = 0; i < n; i++)
        {
            if (a[i] == 0 && !pq.empty())
            {
                my_army += pq.top();
                pq.pop();
            }
            else
                pq.push(a[i]);
        }

        cout << my_army << nl;
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