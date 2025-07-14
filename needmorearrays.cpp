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
#define ln << "\n"
void removeFromEnd(vector<int>& vec, vector<int> endIndices) {
    vector<bool> toRemove(vec.size(), false);
    
    for (int endIndex : endIndices) {
        if (endIndex >= 0 && endIndex < vec.size()) {
            int frontIndex = vec.size() - 1 - endIndex;
            toRemove[frontIndex] = true;
        }
    }
    
    int writePos = 0;
    for (int readPos = 0; readPos < vec.size(); readPos++) {
        if (!toRemove[readPos]) {
            vec[writePos] = vec[readPos];
            writePos++;
        }
    }
    
    vec.resize(writePos);
}
void solve() {
	int n, count = 0, k;
	cin >> n;
	vi array(n);
	rep(i, 0, n)
		cin >> array[i];
	rep(i, 0, n)
	{
		if (array[i] == array[i+1] - 1)
		{
			count++;
			continue;
		}
		cout << "index =" << i ln << "count =" << count ln;
		if (count > 1)
		{
			k = (count + 1)/3, n = i+2;
			vi indices(k);
			cout << k;
			rep(i, 0, k)
			{
				indices[i] = n;
				n+=2;
			}
			for (int i: indices)
				cout << "indices:" << i;
			removeFromEnd(array, indices);
		}
		count = 0;

	}
	for (int j: array)
		cout << j << " ";
	int x = 1;
	k = array.size();
	rep(i, 0, k-1){
		if (array[i] == array[i+1] - 1 || array[i] == array[i+1])
			continue;
		x++;
		}
	cout << x ln;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1;
    //cin >> t;
    
    while(t--) {
        solve();
    }
    
    return 0;


}


