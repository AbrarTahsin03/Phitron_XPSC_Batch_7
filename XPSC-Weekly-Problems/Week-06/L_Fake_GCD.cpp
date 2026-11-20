#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> result(n);

        int odd_val = 1;
        int even_val = 2;

        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 1)
            {

                result[i - 1] = odd_val;
                odd_val += 2;
            }
            else
            {

                result[i - 1] = even_val;
                even_val += 2;
            }
        }

        for (int i = 0; i < n; i++)
        {
            cout << result[i];
            if (i < n - 1)
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}