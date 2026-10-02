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
    map<string, int> names;
    tt(t)
    {
        string s;
        cin >> s;
        if (names[s] == 0)
        {
            cout << "OK\n";
            names[s]++;
        }
        else
        {
            cout << s << names[s] << endl;
            string newname = s + to_string(names[s]);
            names[newname]++;
            names[s]++;
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