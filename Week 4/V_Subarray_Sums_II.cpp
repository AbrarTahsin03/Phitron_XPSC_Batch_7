#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define tt(x) \
    int x;    \
    cin >> x; \
    while (x--)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin >> n >> x;
    vector<ll> a(n);
    map<ll, ll> mp;
    ll pre_sum = 0;
    mp[pre_sum] = 1;
    ll cnt = 0;
    for (auto &i : a)
    {
        cin >> i;
        pre_sum += i;
        cnt += mp[pre_sum - x];
        mp[pre_sum]++;
    }
    cout << cnt << nl;

    return 0;
}