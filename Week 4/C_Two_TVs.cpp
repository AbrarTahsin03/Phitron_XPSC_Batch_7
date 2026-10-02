#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<pair<int, int>> shows(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> shows[i].first >> shows[i].second;
    }

    vector<pair<int, int>> events;
    for (auto [l, r] : shows)
    {
        events.push_back({l, 1});
        events.push_back({r, -1});
    }

    sort(events.begin(), events.end(), [](auto &a, auto &b)
         {
        if (a.first == b.first) return a.second < b.second;
        return a.first < b.first; });

    int active = 0;
    for (auto [time, type] : events)
    {
        active += type;
        if (active > 2)
        {
            cout << "NO\n";
            return 0;
        }
    }

    cout << "YES\n";
    return 0;
}
