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
	int min, t;
	vi nums = {7,4,1,5,3};
	rep(i,0,nums.size())
	{
		min = i;
		rep(j,i,nums.size()) {
			if (nums[j] < nums[min])
				min = j;
		}
		t = nums[i];
		nums[i] = nums[min];
		nums[min] = t;
	}

	rep(i,0,nums.size())
		cout << nums[i];
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


