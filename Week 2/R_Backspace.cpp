#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    map<pair<int, int>, string> mp;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        string s;
        cin >> x >> y >> s;

        mp[{x, y}] = s;
    }
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int p, q;
        cin >> p >> q;

        cout << mp[{p, q}] << endl;
    }

    return 0;
}