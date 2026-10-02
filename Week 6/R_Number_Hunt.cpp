#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(long long n)
{
    if (n < 2)
        return false;
    if (n == 2)
        return true;
    if (n % 2 == 0)
        return false;

    for (long long i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

long long nextPrime(long long n)
{
    if (n < 2)
        return 2;

    if (n % 2 == 0)
    {
        if (isPrime(n))
            return n;
        n++;
    }

    while (!isPrime(n))
    {
        n += 2;
    }
    return n;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long x;
        cin >> x;

        long long p1 = nextPrime(x);

        long long p2 = nextPrime(p1 + 1);

        long long y = p1 * p2;

        cout << y << endl;
    }

    return 0;
}