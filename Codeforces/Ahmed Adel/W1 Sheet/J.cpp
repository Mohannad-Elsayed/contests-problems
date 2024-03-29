// J. Guess what?
// Codeforces - Week 1 Sheet
// https://codeforces.com/group/42BcTs2lav/contest/404035/problem/J
// 2024-03-18 18:34:40

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
    ll n, k, a; cin>> n>> k>> a;
    if (!((n*k)%a)){
    	if (n*k/a > INT_MAX || n*k/a <INT_MIN) return (cout << "long long"), 0;
    	else return (cout << "int"), 0;
    }
    cout << "double";
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