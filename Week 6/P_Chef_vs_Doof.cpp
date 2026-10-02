#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        bool allOdd = true;

        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;

            if (a % 2 == 0)
            {
                allOdd = false;
            }
        }

        if (allOdd)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}