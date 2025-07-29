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
int removeDuplicates(vector<int>& nums) {
        queue<int> unique;
        unique.push(nums[0]);
        for(int i = 1;i<nums.size();i++) {
            if(nums[i]!=unique.back())
                unique.push(nums[i]);
        }

		while (!unique.empty()){
			cout << unique.front() << endl;
			unique.pop();
		}
        return unique.size();
    }
void solve() {
    vi ab = {2,3,3,4,4,5,6};
	int a = removeDuplicates(ab);
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


