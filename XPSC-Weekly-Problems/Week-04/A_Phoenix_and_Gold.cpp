#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define all(c) (c).begin(), (c).end()

void solve()
{
    int n, x;
    cin >> n >> x;
    vi arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int sum = accumulate(all(arr), 0LL);
    if (sum == x)
    {
        cout << "NO\n";
        return;
    }

    cout << "YES\n";
    int current = 0;
    for (int i = 0; i < n; i++)
    {
        if (current + arr[i] == x && i + 1 < n)
        {
            swap(arr[i], arr[i + 1]);
        }
        current += arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " \n"[i == n - 1];
    }
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}