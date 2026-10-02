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
    int t;
    cin >> t;
    map<int, string> ans;
    map<string, int> names;

    for (int i = t; i > 0; i--)
    {
        string name;
        cin >> name;
        names[name] = i;
    }

    for (auto i : names)
        ans[i.second] = i.first;

    for (auto i : ans)
        cout << i.second << endl;

    return;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}