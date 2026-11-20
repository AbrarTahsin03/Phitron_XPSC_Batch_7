#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {

                int val;
                if ((i + j) % 2 == 0)
                {
                    val = 2 + i * m + j;
                }
                else
                {
                    val = 3 + i * m + j;
                }

                cout << val;
                if (j < m - 1)
                    cout << " ";
            }
            cout << endl;
        }
    }

    return 0;
}