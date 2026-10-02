#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<int> window;
    for (int i = 0; i <= n - k; i++)
    {
        window.clear();
        for (int j = i; j < i + k; j++)
        {
            window.push_back(a[j]);
        }
        sort(window.begin(), window.end());
        if (i > 0)
            cout << " ";
        cout << window[(k - 1) / 2];
    }

    return 0;
}