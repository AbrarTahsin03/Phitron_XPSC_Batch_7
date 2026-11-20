#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while(t--) {
        long long n;
        cin >> n;
        
        if(n == 1) {
            cout << 1 << "\n";
            continue;
        }
        
        long long maxLen = 1;
        
        // Check all possible bit positions
        for(int k = 0; k <= 30; k++) {
            long long start = 1LL << k;
            long long end = (1LL << (k + 1)) - 1;
            
            if(start > n) break;
            
            if(end <= n) {
                // Complete range [2^k, 2^(k+1) - 1] fits
                maxLen = max(maxLen, 1LL << k);
            } else {
                // Partial range [2^k, n]
                maxLen = max(maxLen, n - start + 1);
            }
        }
        
        cout << maxLen << "\n";
    }
    
    return 0;
}