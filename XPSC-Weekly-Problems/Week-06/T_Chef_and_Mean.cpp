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

        vector<long long> a(n);
        long long sum = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }

        if (sum % n != 0)
        {
            cout << "Impossible" << endl;
            continue;
        }

        long long mean = sum / n;

        int result = -1;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == mean)
            {
                result = i + 1;
                break;
            }
        }

        if (result == -1)
        {
            cout << "Impossible" << endl;
        }
        else
        {
            cout << result << endl;
        }
    }

    return 0;
}