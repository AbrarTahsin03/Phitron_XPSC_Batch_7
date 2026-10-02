#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<pair<int, int>> movies(n);
    for (int i = 0; i < n; i++)
    {
        cin >> movies[i].first >> movies[i].second;
    }

    sort(movies.begin(), movies.end(), [](const pair<int, int> &a, const pair<int, int> &b)
         { return a.second < b.second; });

    int count = 0;
    int lastEnd = 0;

    for (auto &movie : movies)
    {
        int start = movie.first;
        int end = movie.second;

        if (start >= lastEnd)
        {
            count++;
            lastEnd = end;
        }
    }

    cout << count << "\n";

    return 0;
}