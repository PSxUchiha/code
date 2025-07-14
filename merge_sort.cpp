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

void merge(vi& arr, int low, int mid, int high)
{
	vi temp;
	int left = low;
	int right = mid+1;
	while (left <= mid && right <= high)
	{
		if(arr[left]<=arr[right])
		{
			temp.push_back(arr[left]);
			left++;
		}
		else
		{
			temp.push_back(arr[right]);
			right++;
		}
	}
	while (left<=mid)
	{
		temp.push_back(arr[left]);
		left++;
	}
	while (right<=high)
	{
		temp.push_back(arr[right]);
		right++;
	}
	rep (i, low, high + 1)
		arr[i] = temp[i - low];

}
void mergeSort(vi& arr, int low, int high)
{
	if (low >= high) return;
	int mid = (low + high)/2;
	mergeSort(arr, low, mid);
	mergeSort(arr, mid+1, high);
	merge(arr, low, mid, high);
}
void solve() {
	int n;
	cin >> n;
	vi arr(n);
	rep (i, 0, n)
		cin >> arr[i];
	mergeSort(arr, 0, n - 1);
	for (int x : arr) cout << x << " ";
	cout << endl;
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


