#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin >> s;
    int n = s.size();
    bool frq[26] = {false};
    for (int i = 0; i < n; i++)
    {
        frq[s[i] - 'a'] = true;
    }
    for (int i = 0; i < 26; i++)
    {
        if (frq[i] == false)
        {
            cout << (char)(i + 'a') << endl;
            return 0;
        }
    }
    cout << "None" << endl;
    return 0;
}