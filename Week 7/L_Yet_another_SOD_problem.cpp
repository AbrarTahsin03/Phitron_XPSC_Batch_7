#include <bits/stdc++.h>
using namespace std;

string num_str;
long long dp[20][3][2][2];

long long solve(int pos, int sum_mod, int tight, int started)
{
    if (pos == num_str.length())
    {
        return (sum_mod == 0 && started) ? 1 : 0;
    }

    if (dp[pos][sum_mod][tight][started] != -1)
    {
        return dp[pos][sum_mod][tight][started];
    }

    int limit = tight ? (num_str[pos] - '0') : 9;
    long long result = 0;

    for (int digit = 0; digit <= limit; digit++)
    {
        int new_sum_mod = (sum_mod + digit) % 3;
        int new_tight = tight && (digit == limit);
        int new_started = started || (digit > 0);

        result += solve(pos + 1, new_sum_mod, new_tight, new_started);
    }

    return dp[pos][sum_mod][tight][started] = result;
}

long long count_until(long long n)
{
    if (n < 0)
        return 0;

    num_str = to_string(n);
    memset(dp, -1, sizeof(dp));

    return solve(0, 0, 1, 0);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        long long l, r;
        cin >> l >> r;

        long long ans = count_until(r) - count_until(l - 1);
        cout << ans << "\n";
    }

    return 0;
}