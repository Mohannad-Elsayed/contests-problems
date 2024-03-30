// K. Trelawney's Cry for Help
// Codeforces - Week 3 Sheet
// https://codeforces.com/group/42BcTs2lav/contest/406937/problem/K
// 2024-03-29 09:18:59

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
    int n,tmp, mn = INT_MAX, mx = INT_MIN, q; cin >> n; 
    vector<int> res, input(n);
    each(x, input) cin >> x;
    cin >> q;
    forn(i, 0, n){
    	if (input[i] == q) res.emplace_back(i+1);
    	mx = max(mx, input[i]);
    	mn = min(mn, input[i]);
    }
    auto out = [&](vector<int> v) -> void{
    	forn(i, 0, v.size()){
    		cout << v[i];
    		if (i != v.size()-1) cout << ", ";
    	}
    };
    if (res.size()){
    	cout << (res.size()==1 ? "Student " : "Students ");
    	out(res);
    	cout << (res.size()==1 ? " is " : " are ");
	} else cout << "No students are ";
	cout << q << " years old.\n";
	cout << "Range: " << mn << " to " << mx;
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