#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define tt(x) \
    ll x;     \
    cin >> x; \
    while (x--)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    tt(t)
    {
        int n;
        string s;
        cin >> n >> s;
        int ans = n + 1;
        for (char c = 'a'; c <= 'z'; c++)
        {
            int l = 0, r = n - 1, cnt = 0;
            while (l <= r)
            {
                if (s[l] == s[r])
                    l++, r--;

                else if (s[l] == c)
                    cnt++, l++;

                else if (s[r] == c)
                    cnt++, r--;

                else
                {
                    cnt = n + 1;
                    break;
                }
            }
            ans = min(ans, cnt);
        }
        if (ans == n + 1)
            ans = -1;
        cout << ans << '\n';
    }

    return 0;
}