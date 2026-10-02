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
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            a[i] = 0;
            for (char c : s)
            {
                a[i] = a[i] * 2 + (c - '0');
            }
        }

        set<int> reachable;
        queue<int> q;

        for (int i = 0; i < n; i++)
        {
            if (a[i] > 0 && reachable.find(a[i]) == reachable.end())
            {
                reachable.insert(a[i]);
                q.push(a[i]);
            }
        }

        while (!q.empty())
        {
            int curr = q.front();
            q.pop();

            for (int i = 0; i < n; i++)
            {
                int new_val = curr | a[i];
                if (reachable.find(new_val) == reachable.end())
                {
                    reachable.insert(new_val);
                    q.push(new_val);
                }
            }
        }

        int target = (1 << k) - 1;
        bool all_reachable = true;

        for (int j = 1; j <= target; j++)
        {
            if (reachable.find(j) == reachable.end())
            {
                all_reachable = false;
                break;
            }
        }

        cout << (all_reachable ? "YES" : "NO") << "\n";
    }

    return 0;
}