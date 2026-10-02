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
        long long n;
        cin >> n;

        // Find two divisors closest to sqrt(N)
        long long a = 1, b = n;

        for (long long d = 1; d * d <= n; d++)
        {
            if (n % d == 0)
            {
                long long d1 = d;
                long long d2 = n / d;

                if (d2 - d1 < b - a)
                {
                    a = d1;
                    b = d2;
                }
            }
        }

        long long x, y;

        if (a == b)
        {

            long long lowestBit = a & -a;
            x = lowestBit;
            y = a ^ lowestBit;

            if (y == 0)
            {
                x = a;
                y = 0;
            }
        }
        else
        {
            x = b;
            y = b - a;
        }

        cout << x << " " << y << "\n";
    }

    return 0;
}