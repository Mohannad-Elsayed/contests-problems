// B. Bear and Prime 100
// Codeforces - Interactive Problems
// https://codeforces.com/group/9QrbarK7qH/contest/438487/problem/B
// 2024-03-13 19:33:32

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
    vector<bool> v(101, 1);
    forn(i, 2, 11){
    	if (v[i]){
	    	for (int j = i*i; j<=100; j+=i){
	    		v[j] = 0;
	    	}
    	}
    }
    int cnt = 0, iters = 1;
    forn(i, 2, 101){
    	if (v[i]){
    		if (++iters == 21) break;
    		cout << i << '\n';
    		fflush(stdout);
    		string ans; cin >> ans;
    		if (ans[0] == 'y') cnt++;
    	}
    }
    // cout << iters << '\n';
    cout << (cnt < 2 ? "prime" : "composite");
    fflush(stdout);
    // !Stop Here! */
    return 0;
}
int main(){
    // ios_base::sync_with_stdio(false);cin.tie(0);
    int test = 1;
    // cin >> test;
    forn(i, 1, test+1){
    	// cout << "# " << i << '\n';
      	solve();
      	cout << '\n';
    }
}