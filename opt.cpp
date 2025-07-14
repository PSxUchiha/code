#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    if (n == 1) {
        cout << 1 << "\n";
        return;
    }
    
    int arrays = 1; // Start with 1 array
    
    for (int i = 0; i < n - 1; i++) {
        // If there's a gap (not consecutive), we get a new array
        if (a[i] + 1 < a[i + 1]) {
            arrays++;
        }
    }
    
    cout << arrays << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}

