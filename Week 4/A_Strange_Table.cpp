#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long n, m, x;
    cin >> n >> m >> x;

    long long r, c;
    if (x % n == 0)
    {
        r = n - 1;
        c = x / n - 1;
    }
    else
    {
        r = x % n - 1;
        c = x / n;
    }

    long long val = (r * m) + c + 1;
    cout << val << '\n';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}