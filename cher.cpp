#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        
        vector<int> a(n), b(n);
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        
        // Find the target sum x from non-missing elements
        int fixed_x = -1;
        bool valid = true;
        
        for (int i = 0; i < n; i++) {
            if (b[i] != -1) {
                if (fixed_x == -1) {
                    fixed_x = a[i] + b[i];
                } else if (fixed_x != a[i] + b[i]) {
                    valid = false;
                    break;
                }
            }
        }
        
        if (!valid) {
            cout << 0 << "\n";
            continue;
        }
        
        if (fixed_x != -1) {
            // x is already determined, check if all missing elements can be filled
            bool possible = true;
            for (int i = 0; i < n; i++) {
                if (b[i] == -1) {
                    int required_b = fixed_x - a[i];
                    if (required_b < 0 || required_b > k) {
                        possible = false;
                        break;
                    }
                }
            }
            cout << (possible ? 1 : 0) << "\n";
        } else {
            // All elements are missing, find valid range of x
            int min_x = 0, max_x = 2 * k;
            
            for (int i = 0; i < n; i++) {
                // For position i: 0 <= x - a[i] <= k
                // This gives us: a[i] <= x <= a[i] + k
                min_x = max(min_x, a[i]);
                max_x = min(max_x, a[i] + k);
            }
            
            if (min_x <= max_x) {
                cout << max_x - min_x + 1 << "\n";
            } else {
                cout << 0 << "\n";
            }
        }
    }
    
    return 0;
}

