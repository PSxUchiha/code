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

void rotate(vector<int>& nums, int k) {
        vector<int> temp;
		int t = k;
        while(t--){
            temp.push_back(nums[nums.size()-t-1]);
        }
		for(auto it = nums.end()-1; it>=nums.begin() + k;it--)
		{
			*it = *(it-k);
		}
		for(int i = 0; i<3;i++)
		{
			nums[i] = temp[i];
		}
    }
void solve() {
	vi nums = {1,2,3,4,5,6,7,8,9,10};
	rotate(nums, 3);
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


