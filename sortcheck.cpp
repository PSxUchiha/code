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

bool check(const vector<int>& nums) {
    int n = nums.size();
    if (n == 0) return false;
    int drops = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] > nums[(i + 1) % n]) {
            drops++;
            if (drops > 1)
                return false;
        }
    }
    return true;
}
void solve() {
	int n; 
	cin >> n;
	vi nums(n);
	rep (i,0,n)
		cin >> nums[i];
	if(check(nums))
		cout << "yes" << endl;
	else 
		cout << "no" << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1;
    // cin >> t;
    
    while(t--) {
        solve();
    }
    
    return 0;
}


