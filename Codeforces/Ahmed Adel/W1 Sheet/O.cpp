// O. Sultan's Line
// Codeforces - Week 1 Sheet
// https://codeforces.com/group/42BcTs2lav/contest/404035/problem/O
// 2024-03-19 16:43:57

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
struct point{
	ld x, y;
};
typedef struct point p;
bool safecmp(ld a, ld b){
	return (fabs(a-b) <= 1e-6);
}
void Yes(bool x){
	 cout << (x ? "Yes" : "No");
}
ld dis(p a, p b){
	ld xx = a.x-b.x;
	xx*=xx;
	ld yy = a.y-b.y;
	yy*=yy;
	return sqrt(xx+yy);
}
int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
    p a, b, c;
    cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y;
    Yes(safecmp(dis(a, b)+dis(b, c), dis(a, c)) || 
    	safecmp(dis(b, c)+dis(c, a), dis(a, b)) ||
    	safecmp(dis(a, b)+dis(a, c), dis(b, c))
    	);
    
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