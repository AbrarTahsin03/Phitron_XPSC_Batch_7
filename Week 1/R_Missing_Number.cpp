#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    long long sum_1 = n * (n + 1) / 2;
    long long sum_2 = 0;
    long long x;

    for (int i = 0; i < n - 1; i++)
    {
        cin >> x;
        sum_2 += x;
    }

    cout << sum_1 - sum_2;
    return 0;
}