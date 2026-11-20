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
        long long a, b;
        cin >> a >> b;

        long long g = gcd(a, b);
        long long result = a - g;

        cout << result << endl;
    }

    return 0;
}