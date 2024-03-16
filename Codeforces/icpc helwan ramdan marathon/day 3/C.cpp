// C. Sum-Based Number Reconstruction
// Codeforces - Contest #2
// https://codeforces.com/group/XIc7NSO7Rd/contest/510792/problem/C
// 2024-03-13 23:06:58

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
    /*
    1 2 3 4 5
    3 4 
    */
    int tmp; set<int> ste;
    forn(i, 0, 10){
    	cin >> tmp;
    	ste.insert(tmp);
    }
    each(x, ste) cout << x << ' ';
    // !Stop Here! */
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int test = 1;
    cin >> test;
    forn(i, 1, test+1){
    	cout << "Case " << i << ": ";
      	solve();
      	cout << '\n';
    }
}