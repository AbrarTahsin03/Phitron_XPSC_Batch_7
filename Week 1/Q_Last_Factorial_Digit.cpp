#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        if (N >= 5)
            cout << 0 << endl;
        else
        {
            int factorial = 1;
            for (int i = 1; i <= N; i++)
                factorial *= i;
            cout << factorial % 10 << endl;
        }
    }
    return 0;
}