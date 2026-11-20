#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    string s;
    cin >> s;

    int mx = 0;
    string d = "";

    for (int i = 0; i < n - 1; i++)
    {
        string a = s.substr(i, 2);
        int count = 0;

        for (int j = 0; j < n - 1; j++)
        {
            string b = s.substr(j, 2);
            if (b == a)
            {
                count++;
            }
        }

        if (count > mx)
        {
            mx = count;
            d = a;
        }
    }

    cout << d << endl;

    return 0;
}