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


int fib(int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	else
		return fib(n-1) + fib(n-2);
}
void solve() {
	int n;
	cin >> n;
	int f = fib(n);
	cout << f;
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


