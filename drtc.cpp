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
    // Your code here
	int n, count=0, sum = 0;
	cin >> n;
	string b;
	cin >> b;
	rep(i, 0, n)
	{
		if(b[i] == '1')
			count++;
	}
	rep(i, 0, n)
	{
		if(b[i] == '1')
			sum+=count-1;
		else
			sum+=count+1;
	}
	cout << sum << "\n";
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


