#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        int d = n / k;

        for (int i = 1; i <= k; i++)
        {
            cout << d * i;
            if (i < k)
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}