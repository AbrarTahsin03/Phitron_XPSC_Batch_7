#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int common;
    if (arr[0] == arr[1])
        common = arr[0];
    else if (arr[0] == arr[2])
        common = arr[0];
    else
        common = arr[1];
    
    for (int i = 0; i < n; i++) {
        if (arr[i] != common) {
            cout << i + 1 << '\n';
            break;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}