#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, q;
    cin >> n >> q;

    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.rbegin(), arr.rend());

    vector<pair<int, int>> freq(n + 2);
    for (int i = 0; i < n + 2; i++)
    {
        freq[i] = {0, i};
    }

    vector<pair<int, int>> queries;
    for (int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;
        freq[l].first++;
        freq[r + 1].first--;
        queries.push_back({l, r});
    }

    freq.erase(freq.begin());

    for (int i = 1; i < n + 1; i++)
    {
        freq[i].first += freq[i - 1].first;
    }

    sort(freq.begin(), freq.end(), [](pair<int, int> a, pair<int, int> b)
         {
		if (a.first != b.first)
			return a.first > b.first;
		return a.second < b.second; });

    vector<long long> pref(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        pref[freq[i].second] = arr[i];
    }

    for (int i = 2; i <= n; i++)
    {
        pref[i] += pref[i - 1];
    }

    long long res = 0;
    for (auto &query : queries)
    {
        int l = query.first;
        int r = query.second;
        res += (pref[r] - pref[l - 1]);
    }

    cout << res << '\n';
    return 0;
}