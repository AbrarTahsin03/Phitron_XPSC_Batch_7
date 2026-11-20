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

        for (int i = n; i >= 1; i--)
        {
            cout << i;
            if (i > 1)
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}