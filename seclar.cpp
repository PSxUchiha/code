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

int secondLargestElement(vector<int>& nums) {
	int largest = nums[0];
	int second = -1;
	rep (i,1,nums.size())
	{
		if (largest < nums[i])
		{
			second = largest;
			largest = nums[i];
			cout << "largest = " << largest << ", second largest = " << second << endl;
		}
		else
			if (second < nums[i] && nums[i] < largest)
			{
				second = nums[i];
				cout << "largest = " << largest << ", second largest = " << second << endl;
			}
	}
	return second;
}
void solve() {
	int n;
	cin >> n;
	vi nums(n);
	rep(i,0,n)
		cin >> nums[i];
	int sec = secondLargestElement(nums);
	cout << sec;
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


