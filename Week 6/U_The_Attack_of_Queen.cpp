#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        long long n, x, y;
        cin >> n >> x >> y;
        
        long long horizontal = (y - 1) + (n - y);
        
        long long vertical = (x - 1) + (n - x);
        
        long long topLeft = min(x - 1, y - 1);

        long long topRight = min(x - 1, n - y);
        
        long long bottomLeft = min(n - x, y - 1);
        
        long long bottomRight = min(n - x, n - y);
        
        long long total = horizontal + vertical + topLeft + topRight + bottomLeft + bottomRight;
        
        cout << total << endl;
    }
    
    return 0;
}