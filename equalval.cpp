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
	vi cost(n);
	rep (i, 0, n)
		cin >> arr[i];
	pair<int, int> a = longestConsecutiveEqual(arr);
	if (a.second ==0)
	{
		rep(i, 0, n)
			cost[i] = (n-1) * arr[i];
		auto min_it = min_element(all(cost));
		if (allEqual(cost))
			cout << 0 << endl;
		else
			cout << (ll)*min_it << endl;
	}
	else {
		int val = 0;
		val=(ll)a.first * arr[a.first] + (ll)(n-(a.first+a.second)) * arr[a.first + a.second -1];
		int val2=(ll)(a.first+a.second-2) * arr[a.first+a.second - 1] + (ll)(n-a.first-1) * arr[a.first];
		cout << min(val,val2) << endl;
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


