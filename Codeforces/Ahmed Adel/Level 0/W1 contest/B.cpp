// B. Wegz Need Help
// Codeforces - Week#1 Contest
// https://codeforces.com/group/42BcTs2lav/contest/405441/problem/B
// 2024-03-24 19:37:44

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
  	int a, b, x, y;cin >> a >> b  >> x >> y;
	int dis1 = abs(a-b), dis2 = abs(x-a)+abs(y-b), dis3 =  abs(x-b)+abs(y-a);
	cout << min({dis1, dis2, dis3}); 
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