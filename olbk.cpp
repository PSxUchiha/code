
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define all(x) x.begin(), x.end()
#define rep(i, a, b) for(int i = a; i < b; i++)

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    
    if (k >= n * m) {
        cout << m << "\n";
        return;
    }
    
    int r = k / n; 
    int excess = k % n;
    
    int firstRowElements = r + (excess > 0 ? 1 : 0);
    
    int gaps = m - firstRowElements;
    
    if (gaps <= 0) {
        cout << m << "\n";
        return;
    }
    
    vi row(m, 1);
    
    for (int i = 0; i < gaps; i++) {
        int pos = (i + 1) * m / (gaps + 1);
        row[pos] = 0;
    }
    
    int maxLength = 0;
    int currentLength = 0;
    
    for (int num : row) {
        if (num == 1) {
            currentLength++;
            maxLength = max(maxLength, currentLength);
        } else {
            currentLength = 0;
        }
    }
    
    cout << maxLength << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while(t--) {
        solve();
    }
    
    return 0;
}
