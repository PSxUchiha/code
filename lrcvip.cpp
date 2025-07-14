
#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define rep(i, a, b) for(int i = a; i < b; i++)

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

int findSequenceGCD(vector<int>& arr) {
    int result = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        result = gcd(result, arr[i]);
    }
    return result;
}

void solve() {
    int n;
    cin >> n;
    vi arr(n);
    rep(i, 0, n)
        cin >> arr[i];
    
    vi original = arr;
    bool found = false;
    vi result_partition;
    
    vi subset1 = {arr[0]};
    vi subset2(arr.begin() + 1, arr.end());
    
    if (subset1.size() > 0 && subset2.size() > 0) {
        int gcd1 = findSequenceGCD(subset1);
        int gcd2 = findSequenceGCD(subset2);
        if (gcd1 != gcd2) {
            found = true;
            result_partition.resize(n);
            result_partition[0] = 1;
            for (int i = 1; i < n; i++) {
                result_partition[i] = 2;
            }
        }
    }
    
    if (!found) {
        for (int i = 0; i < n && !found; i++) {
            subset1 = {arr[i]};
            subset2.clear();
            for (int j = 0; j < n; j++) {
                if (j != i) subset2.push_back(arr[j]);
            }
            
            int gcd1 = subset1[0];  
            int gcd2 = findSequenceGCD(subset2);
            
            if (gcd1 != gcd2) {
                found = true;
                result_partition.resize(n);
                for (int j = 0; j < n; j++) {
                    result_partition[j] = (j == i) ? 1 : 2;
                }
            }
        }
    }
    
    if (found) {
        cout << "Yes\n";
        for (int x : result_partition) {
            cout << x << " ";
        }
        cout << "\n";
    } else {
        cout << "No\n";
    }
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
