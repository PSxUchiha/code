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
	int n, zero = 0, one = 0, three = 0, two = 0, five = 0, count = 0;
	bool possible = false;
	cin >> n;
	vi draw(n);
	rep(i, 0, n)
		cin >> draw[i];
	rep(j, 0, n)
	{
		switch (draw[j])
		{
			case 0:
				zero++;
				break;
			case 1:
				one++;
				break;
			case 2:
				two++;
				break;
			case 3:
				three++;
				break;
			case 5:
				five++;
				break;
		}
		//cout << "zero = " << zero << "\tone = " << one << "\ttwo = " << two << "\tthree = " << three << "\tfive = " << five << endl;
		if(zero >= 3 && one >= 1 && two >= 2 && three >= 1 && five >= 1)
		{
			possible = true;
			count = j + 1;
			break;
		}		
	}
	if (possible)
    	cout << count << endl;
	else
		cout << 0 << endl;
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


