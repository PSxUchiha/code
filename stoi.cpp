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
int myAtoi(string s) {
    bool sign = false, found = false;
    int mult = 1;
    string num = "";
    for(int i = 0; i<s.length();i++){
        char ch = s[i];
        if(found && !isdigit(ch))
            break;
        if(sign && (!isdigit(ch) || ch == ' ')) return 0;
        if(ch == ' ' || (ch == 48 && !found && isdigit(s[i+1]))) continue;
        if((ch == '-' || ch == '+') && !sign){
            sign = true;
            mult = (ch=='-'?-1:1);
            continue;
        }
        if(!isdigit(ch))
            break;
        if(ch>=48 && ch <=57){
            found = true;
            num+=ch;
        }
        
        
    }
    long long n = 0;
    for (char c : num) {
        if(num=="2147483647" && mult ==-1)
        {
            return -2147483647;
        }
        if(n*10>=INT_MAX){
            n = INT_MAX;
            break;
        }
        n = n * 10 + (c - '0');

        if (mult * n >= INT_MAX) return pow(2,31)-1;
        if (mult * n <= INT_MIN) return pow(2,31) * -1;
    }
    if(n==INT_MAX){
        if(mult ==-1) 
            n = pow(2,31);
    }
    if(n > pow(2,31)-1){
        if(mult==-1)
            n = pow(2,31);
        else
            n = pow(2,31)-1;
    }
    return mult * n;
}
void solve() {
	string s;
	cin >> s;
	cout << myAtoi(s);
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


