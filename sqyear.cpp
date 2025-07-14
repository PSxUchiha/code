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

bool isPerfectSquare(int n) {
    if (n < 0) return false;
    
    int sr = sqrt(n);
    return (sr * sr == n);
}

void solve() {
	string s;
	cin >> s;
	int year = stoi(s);
	if(isPerfectSquare(year))
	{
		int root = sqrt(year);
		int a;
		if (root/2 > 0)
		{
			rep(i,0,root/2)
				a = i;
		}
		else
			a = 0;
		int b = root - a;
		cout << a << " " << b << "\n";
	}
	else
		cout << -1 << "\n";
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


