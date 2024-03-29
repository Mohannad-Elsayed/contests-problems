// D. World War III
// Codeforces - Week 2: Practice
// https://codeforces.com/group/V8Dgg1V6Pd/contest/412612/problem/D
// 2024-03-21 19:31:52

#include<bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define each(a, x) for (auto &a : x)
#define ys cout << "YES";
#define ns cout << iostream"NO";
#define F first
#define S second
#define pb emplace_back
#define pf emplace_front
#define lwb lower_bound
#define upb upper_bound
typedef long long ll;
typedef long double ld;
typedef unsigned long long llu;
typedef short int si;
#define forn(i,a,b) for(llu i=(llu)(a);i<(llu)(b);i++)
#define rofn(i,a,b) for(llu i=(llu)(a);i>(llu)(b);i--)
const llu MOD {1000000007};
void solve(){
  	ll n, r;
  	cin >> n >> r;
  	ll a{}, b{}, c{};  
  	forn(i, 0, n){
  		ll tmp; cin >> tmp;
  		if (tmp == r){
  			c++;
  			!a ? a = i+1, b = i+1 : b = i+1;
  		}
  	}
  	if (c) cout << a << ' ' << b << ' ' << c;
  	else cout << -1;
}
int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int32_t t = 1;
    // cin >> test;
    forn(i, 1, t+1){
    	// cout << "# " << i << '\n';
      	solve();
      	cout << '\n';
    }
    return 0;
}