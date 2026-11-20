#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define tt(x) \
    int x;    \
    cin >> x; \
    while (x--)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<vector<int>> a(n, vector<int>(2));
    for (int i = 0; i < n; i++)
    {
        cin >> a[i][0];
        a[i][1] = i + 1;
    }
    sort(a.begin(), a.end());

    for (int i = 0; i < n - 2; i++)
    {
        int l = i + 1;
        int r = n - 1;

        while (l < r)
        {
            ll sum = a[i][0] + a[l][0] + a[r][0];

            if (sum == k)
            {
                cout << a[i][1] << " " << a[l][1] << " " << a[r][1] << nl;
                return 0;
            }
            else if (sum < k)
                l++;
            else
                r--;
        }
    }

    cout << "IMPOSSIBLE\n";

    return 0;
}