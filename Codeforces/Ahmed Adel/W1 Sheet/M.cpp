// M. WiFi
// Codeforces - Week 1 Sheet
// https://codeforces.com/group/42BcTs2lav/contest/404035/problem/M
// 2024-03-18 19:05:01

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
    ld x1, y1, r1, x2, y2, r2; 
    cin >>  x1>> y1>>r1>> x2>> y2>> r2;
    cout << ( (dis(x1, y1, x2, y2)<=r1+r2) ? "yes" : "no" ) ;
    
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