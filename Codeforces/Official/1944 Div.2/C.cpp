// C. MEX Game 1
// Codeforces - Codeforces Round 934 (Div. 2)
// https://codeforces.com/contest/1944/problem/C
// 2024-03-16 18:57:58

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
#define lb lower_bound
#define up upper_bound
typedef long long ll;
typedef long double ld;
typedef unsigned long long llu;
typedef short int si;
#define MOD 1000000007
int solve(){
  //TODO tests()  solve() //
    // !Start Here! */
    int n, tmp; cin >> n;
    map<int, int> mp; set<int> res;
    int cmex = 0;
    forn(i, 0, n){
    	cin >> tmp;
    	mp[tmp]++;
    }
    forn(i, 0, n){
		// cout << cmex << endl;
    	auto it = mp.lb(cmex);
    	auto itu = mp.up(cmex);
    	// cout << itu->F << ' ' << itu->S << endl;
    	if (i%2){
    		mp[itu->F]--;
    		if (!mp[itu->F]) mp.erase(itu->F);
    	} else{
    		res.insert(it->F);
    		if (cmex == it -> F) cmex++;
    		mp[it->F]--;
    		if (!mp[it->F]) mp.erase(it->F);
    	}
		    	
    }
    // cout << cmex;
    
    int i = 0;
    for(;i<2e5+1;i++){
    	if (!res.count(i)) return cout << i, 0;
    }
    cout << i;

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