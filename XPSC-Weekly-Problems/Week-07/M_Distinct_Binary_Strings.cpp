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
        int n;
        string s;
        cin >> n >> s;

        int consecutive_equal = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == s[i + 1])
            {
                consecutive_equal++;
            }
        }

        int answer = n - consecutive_equal;

        cout << answer << "\n";
    }

    return 0;
}