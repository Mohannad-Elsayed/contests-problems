// D. Prime Fibonacci
// Codeforces - Week 3 Sheet
// https://codeforces.com/group/42BcTs2lav/contest/406937/problem/D
// 2024-03-27 19:46:49

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
const ll MOD {1000000007};
si solve(){
  llu f1 = 1, f2 = 1;
  unordered_map<int, llu> mp;
  mp[1] = 0; mp[2] = 1;
  forn(i, 3, 51){
  	mp[(int)i] = f1+f2;
  	f2 = f1+f2;
  	f1 = f2-f1;
  }  
  int q; cin >> q;
  while(q--){
  	int qu; cin >> qu; qu++;
  	auto p = [&] (llu x) -> bool {
  		if (x < 2) return 0;
  		for (ll i = 2; i*i<x; ++i){
  			if (x%i)continue;
  			return 0;
  		}
  		return 1;
  	};
  	// cout << mp[qu];
  	cout << (p(mp[qu]) ? "prime\n" : "not prime\n");
  }
}
int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int32_t t = 1;
    // cin >> t;
    forn(i, 1, t+1){
    	// cout << "# " << i << '\n';
      	solve();
      	cout << '\n';
    }
    return 0;
}