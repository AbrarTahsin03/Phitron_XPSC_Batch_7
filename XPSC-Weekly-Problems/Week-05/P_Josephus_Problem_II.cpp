#include <bits/stdc++.h>
using namespace std;

int bit[200005];
int n;

void update(int idx, int val)
{
    while (idx <= n)
    {
        bit[idx] += val;
        idx += idx & -idx;
    }
}

int query(int idx)
{
    int sum = 0;
    while (idx > 0)
    {
        sum += bit[idx];
        idx -= idx & -idx;
    }
    return sum;
}

int findKth(int k)
{
    int lo = 1, hi = n, ans = n;
    while (lo <= hi)
    {
        int mid = (lo + hi) / 2;
        if (query(mid) >= k)
        {
            ans = mid;
            hi = mid - 1;
        }
        else
        {
            lo = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int k;
    cin >> n >> k;

    for (int i = 1; i <= n; i++)
        update(i, 1);

    int pos = 1;
    int remaining = n;

    for (int i = 0; i < n; i++)
    {
        int alive = remaining;
        int steps = (k % alive);
        if (steps == 0)
            steps = alive;

        pos = (pos + steps - 1) % alive + 1;

        int child = findKth(pos);
        cout << child;
        if (i < n - 1)
            cout << " ";

        update(child, -1);
        remaining--;

        if (remaining > 0 && pos > remaining)
            pos = 1;
    }

    return 0;
}