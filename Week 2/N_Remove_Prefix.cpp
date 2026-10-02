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
        map<int, int> mp;
        vector<int> v(n);
        for (auto &x : v)
            cin >> x;

        for (int i = n - 1; i >= 0; i--)
        {
            int x = v[i];
            if (mp[x] != 0)
                break;
            else
                mp[x]++;
        }
        cout << n - mp.size() << endl;
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