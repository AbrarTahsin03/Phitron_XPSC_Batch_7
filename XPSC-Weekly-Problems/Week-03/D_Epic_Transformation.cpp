#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
#define tt(x) \
    ll x;     \
    cin >> x; \
    while (x--)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define yes cout << "YES\n"
#define no cout << "NO\n"

void solve()
{
    tt(t)
    {
        int n;
        cin >> n;
        map<int, int> cnt;
        priority_queue<int> ocr;
        while (n--)
        {
            int x;
            cin >> x;
            cnt[x]++;
        }
        for (auto [x, y] : cnt)
            ocr.push(y);
        while (ocr.size() >= 2)
        {
            int x, y;
            x = ocr.top();
            ocr.pop();
            x--;
            y = ocr.top();
            ocr.pop();
            y--;
            if (x > 0)
                ocr.push(x);
            if (y > 0)
                ocr.push(y);
        }
        int ans = 0;
        while (!ocr.empty())
        {
            ans += ocr.top();
            ocr.pop();
        }
        cout << ans << endl;
    }

    return;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}