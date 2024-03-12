// Problem: C. Infinity Table
// Contest: Codeforces - Codeforces Round 739 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1560/C
// When: 2024-03-11 15:45:04

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
map<ll, ll> mp;
int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
    int cntt = 1;
    each(x, mp){ cout << x.F << ' ' << x.S << '\n'; if (cntt++ == 10) break;}
    ll x; cin >> x;
    auto it = mp.lower_bound(x);
    if (it -> F != x) it--;
    ll resx = it -> S; ll mid, resy = x - resx+1;
    it++; mid = resx + (it->F/2)-1;
    cout << "mid  " << mid << '\n';
    if (x > mid) resx -= (x-mid);
    cout << resx << ' ' << resy;
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    ll val = 1, cnt = 1, currodd = 1;
    while(true){
    	mp[val] = cnt++;
    	if (val > 1000000000) break;
    	val += currodd; currodd += 2;
    }
    int test = 1;
    // cin >> test;
    forn(i, 1, test+1){
    	cout << "# " << i << '\n';
      	solve();
      	cout << '\n';
    }
}