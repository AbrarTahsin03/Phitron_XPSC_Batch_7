#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, x;
    cin >> n >> x;

    map<int, int> seen;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;

        int complement = x - a;
        if (seen.count(complement))
        {
            cout << seen[complement] + 1 << " " << i + 1;
            return 0;
        }

        seen[a] = i;
    }

    cout << "IMPOSSIBLE";
    return 0;
}