// A. B-Laban
// Codeforces - Contest #4
// https://codeforces.com/group/XIc7NSO7Rd/contest/511461/problem/A
// 2024-03-15 23:02:56

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
    int n; cin >> n;
    map<ll, ll> mp; 
    forn(i, 1, n+1){
    	ll tmp;
    	
    	cin >> tmp;
    	mp[tmp]++;
    }
    ll res = 0;
    forn(i, 1, 9){
    	ll tmp; cin >> tmp;
    	res += min(tmp, mp[i]);
    }
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