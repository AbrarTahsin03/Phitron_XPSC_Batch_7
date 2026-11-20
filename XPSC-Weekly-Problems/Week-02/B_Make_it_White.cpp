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
        string s;
        cin >> n >> s;

        // int st = 0, ed = s.size() - 1;
        // while (s[st] != 'B')
        //     st++;
        // while (s[ed] != 'B')
        //     ed--;
        // cout << ed - st + 1 << endl;

        int firstpos = s.find('B'), lastpos = s.rfind('B');
        cout << lastpos - firstpos + 1 << endl;
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