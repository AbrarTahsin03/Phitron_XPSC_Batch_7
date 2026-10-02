#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl '\n'
#define tt(x) ll x; cin >> x; while (x--)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define yes cout << "YES\n"
#define no cout << "NO\n"


void solve()
{
    tt(t)
    {
        int n; cin >> n;
        string s; cin >> s;

        map<char, char> mp;
        set<char> fltr;
        for (char i : s) fltr.insert(i);

        auto f = fltr.begin();
        auto l = fltr.rbegin();

        while (f != fltr.end())
        {
            mp[*f] = *l;
            ++f; ++l;
        }
        
        for (auto i : s)
            cout << mp[i];
        cout << endl;
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