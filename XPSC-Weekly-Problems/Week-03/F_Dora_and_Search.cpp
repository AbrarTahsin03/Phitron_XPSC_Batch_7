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

        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> a[i];

        int l = 1, r = n;
        int minval = 1, maxval = n;

        while (l <= r)
        {
            if (a[l] == minval)
            {
                l++;
                minval++;
            }
            else if (a[l] == maxval)
            {
                l++;
                maxval--;
            }
            else if (a[r] == minval)
            {
                r--;
                minval++;
            }
            else if (a[r] == maxval)
            {
                r--;
                maxval--;
            }
            else
                break;
        }

        (l <= r) ? cout << l << " " << r : cout << -1;
        cout << endl;
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