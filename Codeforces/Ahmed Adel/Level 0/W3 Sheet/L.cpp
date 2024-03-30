// L. Serve the Dishes
// Codeforces - Week 3 Sheet
// https://codeforces.com/group/42BcTs2lav/contest/406937/problem/L
// 2024-03-29 10:05:02

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
int bind(string s){
	int res = 0;
	int p = 0;
	for (auto it = s.rbegin(); it != s.rend(); it++, p++){
		if (*it == '1') res += (int)pow(2, p);
	} return res;
}
si solve(){
    int n; char a, b; cin >> n >> a >> b;
    vector<int> nums;
    forn(i, 0, n){
    	string s; cin >> s;
    	nums.pb(bind(s));
    }
    sort(all(nums));
    if (a == 'D') reverse(all(nums));
    // each(x, nums) cout << x << ' ';
    string t; cin >> t;
    sort(all(t));
    if (b == 'D') reverse(all(t));
    auto it = t.begin(); auto vt = nums.begin();
    for (; it != t.end(); ++it, vt++){
    	cout << (*it) << (*vt) << ' ';
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