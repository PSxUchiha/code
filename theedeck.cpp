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
	int a,b,c;
	cin >> a >> b >> c;
	ll total = a+b+c;
	bool possible;
	if (total%3!=0)
		possible = false;

	int final = total/3;
	int reqd_a = final - a;
	int reqd_b = final - b;
	int available = c - final;
	if (reqd_a >=0 && reqd_b >=0 && reqd_a+reqd_b == available)
		possible = true;
	else
		possible = false;	
	cout << (possible ? "YES\n": "NO\n");
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


