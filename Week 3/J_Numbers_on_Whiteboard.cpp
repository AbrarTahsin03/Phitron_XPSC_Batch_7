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
        vector<pair<int, int>> v;
        int n;
        cin >> n;
        cout << 2 << endl;

        int tmp = (n + n) / 2;

        for (int i = n; i > 1; i--)
        {
            cout << tmp << " " << i - 1 << endl;
            tmp = (tmp + i) / 2;
        }
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