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
    string s, t;
    cin >> s >> t;
    int ct = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != t[i])
            ct++;
    }

    cout << ct << endl;

    return;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}