#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> songs(n);
    for (int i = 0; i < n; i++)
    {
        cin >> songs[i];
    }

    set<int> unique;
    int maxLen = 0;
    int left = 0;

    for (int right = 0; right < n; right++)
    {
        while (unique.count(songs[right]))
        {
            unique.erase(songs[left]);
            left++;
        }
        unique.insert(songs[right]);
        maxLen = max(maxLen, right - left + 1);
    }

    cout << maxLen;
    return 0;
}