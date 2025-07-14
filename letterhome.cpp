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
	int n, s, count;
	cin >> n >> s;
	vi arr(n);
	rep(i, 0, n)
		cin >> arr[i];
	auto start = arr.begin();
	auto end = arr.end()-1;
	if (s == *end || s == *start)
		count = *end - *start;
	else if (n == 1)
		count = abs(s - *start);
	else if (s < *start)
		count = *end - s;
	else if (s > *end)
		count = s - *start;
	else 
	{
	if (s - *start < *end - s)
		count = s - (2 * *start) + *end ;
	else 
		count = (2 * *end) - s - *start;
	}

	cout << count << endl;

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


