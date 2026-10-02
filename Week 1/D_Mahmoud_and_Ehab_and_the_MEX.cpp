#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == x)
            ans++;
    }

    for (int i = 0; i < x; i++)
    {
        int cnt = count(a.begin(), a.end(), i);
        if (cnt == 0)
            ans++;
    }
    cout << ans << endl;
    return 0;
}