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

void recBubble(vi& arr, int n)
{
	if (n == 1) return;
	rep (i, 0, n - 1)
		if (arr[i] > arr[i+1])
			swap(arr[i], arr[i+1]);
	recBubble(arr, n-1);
}

void solve() {
	int n;
	cin >> n;
	vi arr(n);
	rep(i, 0, n)
		cin >> arr[i];
	recBubble(arr, n);
	rep(i, 0, n)
		cout << arr[i] << " ";
	cout << endl;
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


