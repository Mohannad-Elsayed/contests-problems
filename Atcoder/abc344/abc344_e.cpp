// Problem: E - Insert or Erase
// Contest: AtCoder - 	Toyota Programming Contest 2024#3（AtCoder Beginner Contest 344）
// URL: https://atcoder.jp/contests/abc344/tasks/abc344_e
// When: 2024-03-09 14:26:47

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
int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
    int n, tmp, q, t, x, y; cin >> n;
    map<ll, ll> list, blist; int f, pre = -1;
    forn(i, 0, n){
    	pre = tmp;
    	cin >> tmp;
    	if (!i){
    		f = tmp;
    	}
    	else{
    		list[pre] = tmp;
    		blist[tmp] = pre;
    	}
    	// cout << pre << ' ' << tmp << '\n';
    }
    // each(x, list) cout << x.F << ' ' << x.S << '\n';
    // each(x, blist) cout << x.F << ' ' << x.S << '\n';
    
    cin >> q; 
    forn(i, 0, q){
    	cin >> t;
    	if (t == 1){
    		cin >> x >> y;
    		list[y] = list[x];
    		blist[y] = x;
    		list[x] = y;
    		blist[list[x]] = y;
			n++;
    		
    	}
    	else{
    		cin >> x;
    		if (!list.count(x)){
    			list.erase(blist[x]);
    			blist.erase(x);
    		}
    		else if (!blist.count(x)){
    			f = list[x];
    			blist.erase(list[x]);
    			list.erase(x);
    		}
    		else { 
    			list[blist[x]] = list[x];
    			blist[list[x]] = blist[x];
    		}
    		n--;
    	}
    }
    cout << f << ' ' ; tmp = f;
    forn(i, 1, n){
    	cout << list[tmp] << ' ';
    	tmp = list[tmp];
    }
	// each(x, list) cout << x.F << ' ' << x.S << '\n';
	
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