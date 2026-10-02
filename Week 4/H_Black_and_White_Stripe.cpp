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
        int n, k;
        string s;
        cin >> n >> k >> s;

        int l = 0, r = 0, cntW = 0;
        int ans = INT_MAX;

        while (r < n)
        {
            if (s[r] == 'W')
                cntW++;
            if (r - l + 1 == k)
            {
                ans = min(ans, cntW);
                if (s[l] == 'W')
                    cntW--;
                l++;
                r++;
            }
            else
                r++;
        }

        cout << ans << nl;
    }

    return 0;
}