// B. Paper Manipulation Challenge (Easy version)
// Codeforces - Contest #5
// https://codeforces.com/group/XIc7NSO7Rd/contest/511690/problem/B
// 2024-03-16 23:19:12

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
    int n, t, q; cin >> n >> q; vector<char> v(n, '1');
    while(q--){
    	cin >> t;
    	if (t == 1){
    		int x, cn = 0; cin >> x; 
    		// cout << x << ' ';
    		forn(i, 0, v.size()){
    			if(v[i]=='1')cn++;
    			if (cn == x){
    				// cout << v[i] << ' ' << i << endl;
    				 if (v[i+1] != '|') v.insert(v.begin()+i+1, '|');
    				 break;
    			}	
    		}
    		// each(ch, v)cout << ch; cout << '\n';
    	}
    	else{
    		int l, r, cn = 0, len = 0; cin >> l >> r;
    		each(ch, v){
    			if (ch == '|'){
    				if (len<=r && len>=l) cn++;
    				len = 0;
    			}
    			else len++;
    		}
    		if (len<=r && len>=l) cn++;
    		// cout << "len " << cn <<'\n';
    		cout << cn << '\n';
    	}
    }
    
    
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