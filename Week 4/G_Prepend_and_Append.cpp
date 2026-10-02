#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define tt(x) \
    int x;    \
    cin >> x; \
    while (x--)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    tt(t)
    {
        int n;
        string s;
        cin >> n >> s;
        auto fst = s.begin();
        auto lst = s.rbegin();

        while (*fst != *lst && n > 0)
        {
            n -= 2;
            fst++;
            lst++;
        }

        cout << n << endl;
    }

    return 0;
}