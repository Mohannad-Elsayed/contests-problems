// F. Does Hamed Love Geometry?
// Codeforces - Round of 16
// https://codeforces.com/group/MXQ9kdYCKi/contest/512018/problem/F
// 2024-03-18 22:56:04

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
ld dis(ld x1, ld y1, ld x2, ld y2){
	x1 = abs(x1-x2);
	y1 = abs(y1-y2);
	return (sqrt(x1*x1+y1*y1));
}
int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
    ld x1, x2, y1, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    ld res = INT_MAX, p;
    ld mnx = min(x1, x2), mxx = max(x1, x2);
    for (ld pos = mnx; pos <= mxx; pos+=0.05){
    	
    	ld diss = dis(x1, y1, pos, 0) + dis(pos, 0, x2, y2);
    	
    	cout << fixed << setprecision(12) << diss << '\n';
    	if (diss < res){
    		p = pos;
    		res = diss;
    	}
    }
    cout << "here:  "  << p << ' ' << res << "\n" << x1 << ' ' << x2 << "\n\n";
    
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