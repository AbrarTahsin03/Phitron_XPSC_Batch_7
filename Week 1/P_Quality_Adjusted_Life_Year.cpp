#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    double total_QALY = 0.0;
    for (int i = 0; i < N; ++i)
    {
        double q, y;
        cin >> q >> y;
        total_QALY += q * y;
    }

    cout << fixed << setprecision(3) << total_QALY << endl;
    return 0;
}
