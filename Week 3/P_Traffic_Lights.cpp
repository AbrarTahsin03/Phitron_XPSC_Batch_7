#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x, n;
    cin >> x >> n;
    multiset<int> ms;
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        s.insert(a);
        int right;
        int left;
        if (s.upper_bound(a) == s.end())
        {
            right = x - a;
        }
        else
        {
            right = *s.upper_bound(a) - a;
        }
        ms.insert(right);
        auto it = s.lower_bound(a);
        if (it == s.begin())
        {
            left = a;
        }
        else
        {
            left = a - *(--it);
        }
        ms.insert(left);
        if (!(s.lower_bound(a) == s.begin() && s.upper_bound(a) == s.end()))
        {
            if (s.lower_bound(a) == s.begin() && s.upper_bound(a) != s.end())
            {
                ms.erase(ms.find(*s.upper_bound(a)));
            }
            else if (s.lower_bound(a) != s.begin() && s.upper_bound(a) == s.end())
            {
                ms.erase(ms.find(x - *(--s.lower_bound(a))));
            }
            else
            {
                ms.erase(ms.find(*s.upper_bound(a) - *(--s.lower_bound(a))));
            }
        }
        cout << *ms.rbegin() << " ";
    }

    return 0;
}