#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int k, n, m;
    cin >> k >> n >> m;
    vector<int> mono(n), poly(m);
    for (int i = 0; i < n; i++)
    {
        cin >> mono[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> poly[i];
    }
    int mono_idx = 0, poly_idx = 0;
    vector<int> res;
    while (mono_idx < n || poly_idx < m)
    {
        bool actionPerformed = false;
        if (mono_idx < n && mono[mono_idx] == 0)
        {
            ++k;
            res.push_back(0);
            actionPerformed = true;
            ++mono_idx;
        }
        else if (poly_idx < m && poly[poly_idx] == 0)
        {
            ++k;
            res.push_back(0);
            actionPerformed = true;
            ++poly_idx;
        }
        else if (mono_idx < n && mono[mono_idx] <= k)
        {
            res.push_back(mono[mono_idx]);
            actionPerformed = true;
            ++mono_idx;
        }
        else if (poly_idx < m && poly[poly_idx] <= k)
        {
            res.push_back(poly[poly_idx]);
            actionPerformed = true;
            ++poly_idx;
        }
        if (!actionPerformed)
        {
            cout << "-1";
            return;
        }
    }
    for (auto &i : res)
        cout << i << ' ';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
        cout << '\n';
    }
    return 0;
}