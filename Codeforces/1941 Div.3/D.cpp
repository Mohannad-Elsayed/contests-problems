// Problem: D. Rudolf and the Ball Game
// Contest: Codeforces - Codeforces Round 933 (Div. 3)
// URL: https://codeforces.com/contest/1941/problem/D
// When: 2024-03-11 18:00:04

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
    int n, m, start, tmp, curr = 0; cin >> n >> m >> start;
    vector<set<int>> v;
    v.pb({start});
    // cout << v.size();
    forn(i, 0, m){
    	char ch; 
    	cin >> tmp >> ch;
    	// cout << tmp << ' ' << ch;
    	if (ch == '0'){
    		v.pb({});
    		each(x, v[curr]){
    			int val = (x+tmp)%n;
    			if (!val) val = n;
    			v[curr+1].insert(val);
    		}
    		curr++;
    		
    	}
    	else if (ch == '1'){
    		v.pb({});
    		each(x, v[curr]){
    			int val = (((x-tmp)%n)+n)%n;
    			if (!val) val = n;
    			v[curr+1].insert(val);
    		}
    		curr++;
    	}
    	else{
    		v.pb({});
    		each(x, v[curr]){
    			int val1 = (x+tmp)%n;
    			int val2 = (((x-tmp)%n)+n)%n;
    			if (!val1) val1 = n;
    			if (!val2) val2 = n;
    			v[curr+1].insert(val1);
    			v[curr+1].insert(val2);
    		}
    		curr++;
    	}
    }
    cout << v[v.size()-1].size() << '\n';
    each(x, v[v.size()-1]) cout << x << ' ';
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