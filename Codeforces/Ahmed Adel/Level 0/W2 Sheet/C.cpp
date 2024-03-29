// C. Chicken Wings
// Codeforces - Week 2 Sheet
// https://codeforces.com/group/42BcTs2lav/contest/404038/problem/C
// 2024-03-25 15:51:46

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
int n = 1e5+10;
si solve(){
  	  vector<bool> p(n, 1);
  	  forn(i, 0, 2) p[i] = 0;
  	  ll bound = sqrt(n);
  	  for (ll i = 2; i<=bound; ++i){
  	  	if (p[i]){
  	  		for (ll j = i*i; j<=n; j+=i) p[j] = 0;
  	  	}
  	  }
  	  int l, r; cin >> l >> r;
  	  ll sum = 0, cnt = 0;
  	  forn(i, l, r+1){
  		if (p[i]){
  			cnt++;
  			sum += i;
  		}
  	  }
  	  cout << sum << ' ' << cnt;
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