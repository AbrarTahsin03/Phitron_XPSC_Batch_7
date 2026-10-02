#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<long long> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        long long result = 0;
        for (int i = 0; i < n; i++)
        {
            result ^= (2 * a[i]);
        }

        cout << result << "\n";
    }

    return 0;
}