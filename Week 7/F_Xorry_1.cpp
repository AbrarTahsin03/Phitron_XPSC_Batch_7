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
        long long x;
        cin >> x;

        int msb = -1;
        for (int i = 30; i >= 0; i--)
        {
            if (x & (1LL << i))
            {
                msb = i;
                break;
            }
        }

        long long a = 0, b = 0;

        bool first_one = true;
        for (int i = 30; i >= 0; i--)
        {
            if (x & (1LL << i))
            {
                if (first_one)
                {
                    b |= (1LL << i);
                    first_one = false;
                }
                else
                {
                    a |= (1LL << i);
                }
            }
        }

        cout << a << " " << b << "\n";
    }

    return 0;
}