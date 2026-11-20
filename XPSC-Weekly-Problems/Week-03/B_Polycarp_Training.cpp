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
    multiset<long long int> s;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        auto it = s.lower_bound(i);
        if (it != s.end())
        {
            s.erase(it);
            cnt++;
        }
        else
            break;
    }

    cout << cnt << endl;

    return;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}