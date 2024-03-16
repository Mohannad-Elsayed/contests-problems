// B. Array Fix
// Codeforces - Educational Codeforces Round 163 (Rated for Div. 2)
// https://codeforces.com/contest/1948/problem/B
// 2024-03-15 16:39:15

#include<bits/stdc++.h>
using namespace std;
#define forn(i,a,b) for (int i=(int)(a);i<(int)(b);i++)
#define rofn(i,a,b) for (int i=(int)(a);i>(int)(b);i--)
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define each(a, x) for (auto &a : x)
#define ys cout << "YES";
#define ns cout << "NO"
#define F first
#define S second
#define pb push_back
typedef long long ll;
typedef long double ld;
typedef unsigned long long llu;
typedef short int si;
#define MOD 1000000007
int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
    // 12 3 4 5 6 5 
    int n, indx = 1; cin >> n;
    map<int, string> mp; // indx, num
    forn(i, 0, n){
    	string s; cin >> s;
    	mp[indx] = s;
    	indx+= 1000;
    }
    auto endi = mp.end(); endi--;
    int iters = 60;
    while(iters--){
	    for (auto it = mp.begin(); it != endi; ++it){
	    	auto nit = next(it);
	    		indx = it -> F; string s = it -> S, ss = nit -> S; 
	    	if (stoi(s) > stoi(ss)){
	    		mp[indx] = s[0] + '\0';
	    		if (s.size() > 1) mp[indx+1] = s[1] + '\0';
	    	}
	    }
	}
    // each(v, mp) cout << v.F << ' ' << v.S << '\n';
    for (auto it = mp.begin(); it != endi; ++it){
    	string s = it -> S, ss = next(it) -> S; 
    	if (stoi(s) > stoi(ss)) return (ns), 0;
    }
    ys
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int test = 1;
    cin >> test;
    forn(i, 1, test+1){
    	// cout << "# " << i << '\n';
      	solve();
      	cout << '\n';
    }
}