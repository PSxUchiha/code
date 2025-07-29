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
int bin_search(vi arr, int low, int high, int n){
	if (low>high) return -1;
	int mid = (low+high)/2;
	if(arr[mid] == n) return mid;
	else if (n > arr[mid]) return bin_search(arr, mid+1,high, n);
	else return bin_search(arr,low,mid-1, n);
		
	
}
void solve() {
	int n;
	cin >> n;
	vi arr(n);
	rep(i,0,n)
		cin >> arr[i];
	int target;
	cin >> target;

	int out = bin_search(arr, 0, arr.size()-1,target);
	cout << out;

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


