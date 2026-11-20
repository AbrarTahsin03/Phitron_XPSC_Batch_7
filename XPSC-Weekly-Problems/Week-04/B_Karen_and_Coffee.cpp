#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, k, q;
    cin >> n >> k >> q;

    const int MAXN = 200005;
    int cache[MAXN] = {0};

    for (int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;
        cache[l]++;
        cache[r + 1]--;
    }

    for (int i = 1; i < MAXN; i++)
    {
        cache[i] += cache[i - 1];
    }

    for (int i = 0; i < MAXN; i++)
    {
        if (cache[i] >= k)
            cache[i] = 1;
        else
            cache[i] = 0;
    }

    for (int i = 1; i < MAXN; i++)
    {
        cache[i] += cache[i - 1];
    }

    for (int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;
        cout << cache[r] - cache[l - 1] << '\n';
    }

    return 0;
}