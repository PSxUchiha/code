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
 	string s; 
	cin >> s;
	long cnt(0);
	bool ans(true);
	rep(p, 1,s.size()-1)
	{
		cnt += ( (s[p] == '(') - (s[p] == ')'));
		if(cnt < 0)
			ans = false;
	}
	std::cout << (ans ? "NO" : "YES") << std::endl;
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


