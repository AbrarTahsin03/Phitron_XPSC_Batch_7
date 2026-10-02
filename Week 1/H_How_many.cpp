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
    int s, t;
    cin >> s >> t;
    long long int res = 0;
    for (int a = 0; a <= s; a++)
    {
        for (int b = 0; a + b <= s; b++)
        {
            for (int c = 0; a + b + c <= s; c++)
            {
                if (a * b * c <= t)
                    res++;
            }
        }
    }

    cout << res << endl;

    return;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}