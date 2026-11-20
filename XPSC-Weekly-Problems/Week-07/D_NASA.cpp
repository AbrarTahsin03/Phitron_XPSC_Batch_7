#include <bits/stdc++.h>
using namespace std;

static inline bool isPalindrome(int x)
{
    string s = to_string(x);
    int l = 0, r = (int)s.size() - 1;
    while (l < r)
    {
        if (s[l++] != s[r--])
            return false;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> pal;
    for (int i = 0; i < (1 << 15); ++i)
    {
        if (isPalindrome(i))
            pal.push_back(i);
    }

    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;

        unordered_map<int, long long> freq;
        freq.reserve(N * 2);

        long long ans = 0;

        for (int i = 0; i < N; ++i)
        {
            int x;
            cin >> x;

            for (int p : pal)
            {
                int y = x ^ p;
                auto it = freq.find(y);
                if (it != freq.end())
                {
                    ans += it->second;
                }
            }

            ans++;

            freq[x]++;
        }

        cout << ans << '\n';
    }

    return 0;
}
