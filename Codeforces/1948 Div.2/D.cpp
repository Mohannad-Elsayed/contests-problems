// D. Tandem Repeats?
// Codeforces - Educational Codeforces Round 163 (Rated for Div. 2)
// https://codeforces.com/contest/1948/problem/D
// 2024-03-15 18:26:32

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
    string s; cin >> s;
    int sz = s.size();
    int res = 0;
    forn(i, 0, sz){
    	int len = 0;
    	rofn(indx, sz/2, sz/2){
    		if (s[i] == s[i+sz/2] || s[i+sz/2] == '?' || s[i] == '?'){
    			len++;
    		}
    		else{
    			break;
    		}
    	}
    	res = max(len, res);
    }
    cout << res*2;
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