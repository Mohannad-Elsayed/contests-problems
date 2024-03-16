// C. Interval removal
// Codeforces - Contest #4
// https://codeforces.com/group/XIc7NSO7Rd/contest/511461/problem/C
// 2024-03-15 23:09:40

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
    int n, tmp, cnt = 0; cin >> n;
    stack<int> stk;
    vector<ll> res(n);
    forn(i, 0, n){
    	cin >> tmp;
    	if (stk.empty() || tmp == stk.top()){
    		stk.push(tmp);
    		res[i] = stk.size();
    	}
    	else{
    		stk.pop();
    		res[i] = stk.size();
    	}
    }
    // ll sum = res[0];
    // forn(i, 1, n){
    	// sum += res[i];
    	// res[i] = sum;
    // }
    each(s, res) cout << s << ' '; cout <<endl;
    int q; cin >> q;
    while(q--){
    	int l, r; cin >> l >> r;
    	l--, r--;
    	cout << res[l]-res[r]+1 << '\n';
    	
    }
    
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int test = 1;
    cin >> test;
    forn(i, 1, test+1){
    	// cout << "# " << i << '\n';
      	solve();
      	cout << '\n';
    }
}