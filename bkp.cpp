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

bool allEqual(const vector<int>& arr) {
    return adjacent_find(arr.begin(), arr.end(), not_equal_to<int>()) == arr.end();
}

pair<int, int> longestConsecutiveEqual(const vector<int>& arr) {
    int n = arr.size();
    
    if (n <= 1) {
        return {0, 0}; 
    }
    
    int maxLength = 1;
    int maxStart = -1;
    
    int currentLength = 1;
    int currentStart = 0;
    
    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) {
            currentLength++;
        } else {
            if (currentLength > maxLength) {
                maxLength = currentLength;
                maxStart = currentStart;
            }
            currentLength = 1;
            currentStart = i;
        }
    }
    
    if (currentLength > maxLength) {
        maxLength = currentLength;
        maxStart = currentStart;
    }
    
    if (maxLength == 1) {
        return {0, 0};
    }
    return {maxStart, maxLength};
}

void solve() {
    int n;
    cin >> n;
    vi arr(n);
    rep(i, 0, n)
        cin >> arr[i];
    
    // Check if already all equal
    if (allEqual(arr)) {
        cout << 0 << endl;
        return;
    }
    
    ll minCost = LLONG_MAX;
    
    // Try each position as the source
    rep(i, 0, n) {
        ll cost = 0;
        
        // Cost to make elements to the left equal to arr[i]
        if (i > 0) {
            cost += (ll)i * arr[i];
        }
        
        // Cost to make elements to the right equal to arr[i]
        if (i < n - 1) {
            cost += (ll)(n - 1 - i) * arr[i];
        }
        
        minCost = min(minCost, cost);
    }
    
    cout << minCost << endl;
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

