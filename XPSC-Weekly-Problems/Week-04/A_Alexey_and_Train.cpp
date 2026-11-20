#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<long long> a(n + 1), b(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i] >> b[i];
        }

        vector<long long> tm(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> tm[i];
        }

        long long current_time = 0;

        for (int i = 1; i <= n; i++)
        {
            if (i == 1)
            {
                current_time = 0;
            }
            else
            {
                current_time = current_time + (a[i] - b[i - 1]) + tm[i];
            }

            if (i == n)
            {
                break;
            }

            long long wait_time = (b[i] - a[i] + 1) / 2;

            current_time = max(current_time + wait_time, b[i]);
        }

        cout << current_time << endl;
    }

    return 0;
}