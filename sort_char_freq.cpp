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

bool sortByFreq(const pair<char,int> &a, const pair<char, int>  &b) {
    return a.second > b.second;
}
int count(string& s, char ch)
{
    int freq = 0;
    for(int i = 0; i<s.length();i++){
        char k = s[i];
        if(ch == k){
            freq++;
            s[i]='_';
        }
    }
    return freq;
}
string frequencySort(string s) {
    vector<pair<char,int>> freq(s.length(),{' ',0});
    for(int i = 0;i<s.length();i++){
        char ch = s[i];
        if(ch!='_'){
            int c = count(s,ch);
            freq[i] = {ch,c};
        }
    }
    sort(freq.begin(), freq.end(), sortByFreq);
    
    string str;
    for(auto i:freq){
        while(i.second--)
            str+=i.first;
    }
    return str;
}
void solve() {
	string s;
	cin >> s;
	cout << frequencySort(s);
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


