#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    char freq[26] = {0};
    for (int i = 0; i < 26; i++)
        freq[i] = 'a' + i;

    while (t--)
    {
        string s;
        cin >> s;

        int n = s.size();
        bool flag = 0;

        for (int i = 1; i < n; i++)
        {
            if (s[i] == s[i - 1])
            {
                char ins = (s[i] == 'z') ? 'a' : s[i] + 1;
                s.insert(s.begin() + i, ins);

                flag = 1;
                break;
            }
        }

        if (!flag)
            s.push_back(s.back() == 'z' ? 'a' : s.back() + 1);

        cout << s << endl;
    }
    return 0;
}