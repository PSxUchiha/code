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
	int n, m, k, r, excess, x, g;
	bool flag = false;
	cin >> n >> m >> k;
	r = k/n;
	excess = k - (r * n);
	x = r + excess;
	g = m - x;
	if(k<n*m)
	{
		int maxLength = 0;
    	int currentLength = 0;
		if (g>0)
		{
			vi row(m);
			rep(i, 0, m)
				row[i]=1;
			int z = m/(g+1);
			int s = m/g;
			while (g--)
			{
				row[z] = 0;
				z+= s;
			}
			for (int num : row) 
			{
        		if (num == 1) 
				{
            		currentLength++;
            		maxLength = max(maxLength, currentLength);
        		} 
				else 
            		currentLength = 0;
        	
    		}

		}
		else 
			maxLength = m;
		cout << maxLength << "\n";
	}
	else
		cout << m << "\n";
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


