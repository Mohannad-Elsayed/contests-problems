// A. Split it!
// Codeforces - Week#3 Contest
// https://codeforces.com/group/42BcTs2lav/contest/406964/problem/A
// 2024-03-26 16:01:18

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
	int n , k, f; cin >> n >> k;
    string s; cin >> s;
    if (k == 0) return (cout << "YES"), 0;
    forn(i, 0, n/2){
    	if (s[i] == s[n-i-1]) k--;
    	else{
    		f = 0; break;
    	}
    	if (!k){
    		if (i<(n+1)/2-1) f=1;
    		else f = 0;
    	}
    }
    cout << (f?"YES":"NO");
}
int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int32_t t = 1;
    cin >> t;
    forn(i, 1, t+1){
    	// cout << "# " << i << '\n';
      	solve();
      	cout << '\n';
    }
    return 0;
}