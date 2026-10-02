#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> vc(n);
        for (int i = 0; i < n; i++)
            cin >> vc[i];

        set<int> s1;
        set<int> temp;
        int ans = 1;

        s1.insert(vc[0]);
        for (int i = 1; i < n; i++)
        {
            auto it = s1.find(vc[i]);
            if (it != s1.end())
            {
                s1.erase(it);
                temp.insert(vc[i]);
            }
            else
            {
                temp.insert(vc[i]);
            }

            if (s1.empty())
            {
                ans++;
                s1 = temp;
                temp.clear();
            }
        }

        cout << ans << '\n';
    }
    return 0;
}