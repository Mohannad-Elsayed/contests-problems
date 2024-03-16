// A. Guess the Number
// Codeforces - Interactive Problems
// https://codeforces.com/group/9QrbarK7qH/contest/438487/problem/A
// 2024-03-13 19:17:19

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
int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
    int l = 1, r = 1000000, m, res;
    while(l<=r){
    	m = l+(r-l)/2;
    	cout << m << '\n';
    	fflush(stdout);
    	string s; cin >> s;
    	if (s[0] == '>'){
    		l = m+1;
    		res = m;
    	} else r = m-1;
    }
    cout << "! " << res;
    fflush(stdout);
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