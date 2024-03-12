// Problem: C - A+B+C
// Contest: AtCoder - 	Toyota Programming Contest 2024#3（AtCoder Beginner Contest 344）
// URL: https://atcoder.jp/contests/abc344/tasks/abc344_c
// When: 2024-03-09 14:08:22

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
#define ll long long
#define ld long double
#define llu long long unsigned
#define si short int
#define MOD 1000000007
int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
    int n, m, l; 
    cin >> n; 
    vector<int> vn(n);
    each(x, vn) cin >> x;
    cin >> m; 
    vector<int> vm(m);
    each(x, vm) cin >> x;
    cin >> l; 
    vector<int> vl(l);
    each(x, vl) cin >> x;
    
    set<ll> ste;
	each(x, vn){
		each(y, vm){
			each(z, vl) ste.insert(x+y+z);
		}
	}
	int q, tmp; cin >> q;
	forn(i, 0, q){
		cin >> tmp;
		ste.count(tmp) ? cout << "Yes\n" : cout << "No\n";
	}
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