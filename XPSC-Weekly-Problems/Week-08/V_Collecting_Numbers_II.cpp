#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    cin >> n >> m;
    
    vector<int> arr(n + 1); 
    vector<int> position(n + 1); 
    
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        position[arr[i]] = i;
    }
    
    int rounds = 1;
    for (int i = 2; i <= n; i++) {
        if (position[i] < position[i - 1]) {
            rounds++;
        }
    }
    

    auto isBad = [&](int val) {
        if (val < 1 || val >= n) return false;
        return position[val + 1] < position[val];
    };
    
    for (int op = 0; op < m; op++) {
        int a, b;
        cin >> a >> b;
        
        if (a == b) {
            cout << rounds << "\n";
            continue;
        }
        
        int x = arr[a];
        int y = arr[b];
        
        set<int> toCheck;
        toCheck.insert(x - 1);
        toCheck.insert(x);
        toCheck.insert(y - 1);
        toCheck.insert(y);
        
        int badBefore = 0;
        for (int val : toCheck) {
            if (isBad(val)) badBefore++;
        }
        
        swap(arr[a], arr[b]);
        position[x] = b;
        position[y] = a;
        
        int badAfter = 0;
        for (int val : toCheck) {
            if (isBad(val)) badAfter++;
        }
        
        rounds += (badAfter - badBefore);
        
        cout << rounds << "\n";
    }
    
    return 0;
}