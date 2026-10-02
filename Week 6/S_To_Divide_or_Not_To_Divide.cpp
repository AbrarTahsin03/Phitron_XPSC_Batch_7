#include <iostream>
#include <algorithm>

using namespace std;

long long gcd(long long a, long long b)
{
    while (b != 0)
    {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long a, b, n;
        cin >> a >> b >> n;

        if (a % b == 0)
        {
            cout << -1 << endl;
            continue;
        }

        long long start = ((n + a - 1) / a) * a;

        bool found = false;
        long long result = -1;

        for (long long i = 0; i < b; i++)
        {
            long long candidate = start + i * a;

            if (candidate % b != 0)
            {
                result = candidate;
                found = true;
                break;
            }
        }

        cout << result << endl;
    }

    return 0;
}