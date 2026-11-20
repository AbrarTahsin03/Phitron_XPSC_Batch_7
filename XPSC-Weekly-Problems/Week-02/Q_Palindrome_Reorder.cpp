#include <bits/stdc++.h>
    using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    map<char, int> mp;
    for (char c : s)
        mp[c]++;

    int odd = 0;
    char oddChar = 0;
    for (auto [x, y] : mp)
    {
        if (y % 2 != 0)
        {
            odd++;
            oddChar = x;
        }
    }

    if (odd > 1)
    {
        cout << "NO SOLUTION\n";
        return 0;
    }

    string firstHalf = "";
    for (auto [x, y] : mp)
    {
        firstHalf += string(y / 2, x);
    }

    string res = firstHalf;
    if (oddChar)
        res += string(mp[oddChar] % 2, oddChar); // middle char
    reverse(firstHalf.begin(), firstHalf.end());
    res += firstHalf;

    cout << res << '\n';
}