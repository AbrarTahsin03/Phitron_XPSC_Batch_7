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
    int n, s = 0, d = 0;
    cin >> n;

    deque<int> dq(n);
    for (int i = 0; i < n; i++)
        cin >> dq[i];

    int cnt = 1;
    while (dq.size() > 0)
    {
        int a = dq.front(), b = dq.back();
        (a > b) ? dq.pop_front() : dq.pop_back();
        int add = max(a, b);

        (cnt % 2 != 0) ? s += add : d += add;
        cnt++;
    }

    cout << s << " " << d << endl;

    return;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}