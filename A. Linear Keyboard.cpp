// A. Linear Keyboard
// Codeforces - Codeforces Round 753 (Div. 3)
// https://codeforces.com/problemset/problem/1607/A
// 2024-03-17 15:49:40

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
    string key, msg;
    cin >> key >> msg; 
    int pos[256]{};
    forn(i, 1, 27){
    	pos[key[i-1]] = i;
    }
    int sum = 0;
    forn(i, 1, msg.size()){
    	sum += abs(pos[msg[i]] - pos[msg[i-1]]);
    } 
    cout << sum;
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