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

    tt(t)
    {
        int n;
        cin >> n;
        vector<int> a(n);

        int ans = 0;
        ll sum = 0;
        bool pos = true;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += abs(a[i]);
            if (a[i] < 0 && pos == true)
            {
                ans++;
                pos = false;
            }
            else if (a[i] > 0)
                pos = true;
        }

        cout << sum << " " << ans << nl;
    }

    return 0;
}