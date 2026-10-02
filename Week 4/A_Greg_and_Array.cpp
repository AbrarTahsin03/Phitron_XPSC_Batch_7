#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m, k;
    cin >> n >> m >> k;

    vector<long long> arr(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    vector<array<int, 3>> ops(m + 1);
    for (int i = 1; i <= m; i++)
    {
        cin >> ops[i][0] >> ops[i][1] >> ops[i][2];
    }

    vector<long long> opCount(m + 2, 0);
    for (int i = 0; i < k; i++)
    {
        int x, y;
        cin >> x >> y;
        opCount[x]++;
        opCount[y + 1]--;
    }

    for (int i = 1; i <= m; i++)
    {
        opCount[i] += opCount[i - 1];
    }

    vector<long long> diff(n + 2, 0);
    for (int i = 1; i <= m; i++)
    {
        if (opCount[i] > 0)
        {
            int l = ops[i][0];
            int r = ops[i][1];
            long long d = ops[i][2];
            diff[l] += d * opCount[i];
            diff[r + 1] -= d * opCount[i];
        }
    }

    for (int i = 1; i <= n; i++)
    {
        diff[i] += diff[i - 1];
        arr[i] += diff[i];
    }

    for (int i = 1; i <= n; i++)
    {
        cout << arr[i];
        if (i < n)
            cout << ' ';
    }
    cout << '\n';

    return 0;
}