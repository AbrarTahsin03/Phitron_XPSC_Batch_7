#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<bool> alive(n + 1, true);
    int pos = 0;
    int remaining = n;

    while (remaining > 0)
    {
        int skipped = 0;
        while (skipped < 2)
        {
            pos++;
            if (pos > n)
                pos = 1;
            if (alive[pos])
                skipped++;
        }

        alive[pos] = false;
        cout << pos;
        remaining--;
        if (remaining > 0)
            cout << " ";
    }
    cout << endl;

    return 0;
}