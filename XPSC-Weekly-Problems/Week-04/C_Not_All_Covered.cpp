#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> imos(n + 1);

    for (int i = 0; i < m; ++i)
    {
        int l, r;
        cin >> l >> r;
        l--;
        imos[l]++, imos[r]--;
    }

    for (int i = 1; i <= n; ++i)
        imos[i] += imos[i - 1];

    int ans = 1e9;
    for (int i = 0; i < n; ++i)
        ans = min(ans, imos[i]);
        
    cout << ans << endl;
}
