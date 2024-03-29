// C. M&M product
// Codeforces - Week 1: Contest
// https://codeforces.com/group/V8Dgg1V6Pd/contest/412383/problem/C
// 2024-03-20 22:58:13

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
    ll l, r; cin >> l >> r;
    cout << min({l*l, r*r, l*r}) << ' ' << max({l*r,l*l , r*r});
    
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