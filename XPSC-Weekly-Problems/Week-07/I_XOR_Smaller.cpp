#include <bits/stdc++.h>
using namespace std;

int countSubmasks(long long mask)
{
    int bits = __builtin_popcountll(mask);
    return (1LL << bits) - 1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        long long andAll = a[0];
        for (int i = 1; i < n; i++)
        {
            andAll &= a[i];
        }

        if (andAll == 0)
        {
            cout << 0 << "\n";
            continue;
        }

        int highBit = 0;
        for (int bit = 29; bit >= 0; bit--)
        {
            if (andAll & (1LL << bit))
            {
                highBit = bit;
                break;
            }
        }

        long long answer;

        if (n == 1)
        {
            long long lowerBits = andAll & ((1LL << highBit) - 1);
            answer = countSubmasks(lowerBits) + (1LL << highBit);
        }
        else
        {
            long long testX = (1LL << highBit);
            bool works = true;
            for (int i = 0; i < n; i++)
            {
                if ((testX ^ a[i]) >= a[i])
                {
                    works = false;
                    break;
                }
            }

            answer = works ? (1LL << highBit) : 0;
        }

        cout << answer << "\n";
    }

    return 0;
}