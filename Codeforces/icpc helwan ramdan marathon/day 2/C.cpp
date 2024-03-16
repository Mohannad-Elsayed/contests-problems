// Problem: C. Count Max Sub Array
// Contest: Codeforces - Contest #1
// URL: https://codeforces.com/group/XIc7NSO7Rd/contest/510511/problem/C
// When: 2024-03-12 23:26:38

#include<bits/stdc++.h>
using namespace std;
#define forn(i,a,b) for (int i=(int)(a);i<(int)(b);i++)
#define rofn(i,a,b) for (int i=(int)(a);i>(int)(b);i--)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define each(a, x) for (auto &a : x)
#define ys cout << "YES";
#define ns cout << "NO";
#define F first
#define S second
#define pb push_back
typedef long long ll;
typedef long double ld;
typedef unsigned long long llu;
typedef short int si;
#define MOD 1000000007
int mxlen = INT_MIN;
int arr[26]{};
map<char, int> frq;
int numofchars = 0, k;
string s;
int ok(){
	each(x, frq){
		if (x.S != k) return 0;
	}
	return 1;
}

int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
    int res = 0;
    cin >> k >> s;
	each(ch, s) arr[ch-'a']++;
	each(x, arr) if (x) numofchars++;
	// cout << numofchars;
	int m = numofchars*k;
	
	forn(i, 0, min(m, (int)s.size())){
		frq[s[i]]++;
	}
	
	forn(i, m, s.size()){
		if (ok()) res++;
		frq[s[i]]++;
		frq[s[i-m]]--;
		if (!frq[s[i-m]]) frq.erase(s[i-m]);	
	}
	if (ok()) res++;
	cout << res;
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int test = 1;
    // cin >> test;
    forn(i, 1, test+1){
    	// cout << "# " << i << '\n';
      	solve();
      	cout << '\n';
    }
}