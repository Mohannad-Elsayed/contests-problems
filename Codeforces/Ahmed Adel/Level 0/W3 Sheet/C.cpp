// C. Suffix Structures
// Codeforces - Week 3 Sheet
// https://codeforces.com/group/42BcTs2lav/contest/406937/problem/C
// 2024-03-27 16:59:30

#include<bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define each(a, x) for (auto &a : x)
#define ys cout << "YES";
#define ns cout << iostream"NO";
#define F first
#define S second
#define pb emplace_back
#define pf emplace_front
#define lwb lower_bound
#define upb upper_bound
typedef long long ll;
typedef long double ld;
typedef unsigned long long llu;
typedef short int si;
#define forn(i,a,b) for(llu i=(llu)(a);i<(llu)(b);i++)
#define rofn(i,a,b) for(llu i=(llu)(a);i>(llu)(b);i--)
const ll MOD {1000000007};
si solve(){
    /*
    	check freq for both, if first == second in all:
    		array
    	first > second
    		 check substr ?  automaton : both
		else
			need tree
    */
    string s, t; cin >> s >> t;
    vector<int> f1(256), f2(256);
    each(ch, s) f1[ch]++;
    each(ch, t) f2[ch]++;
    bool firstequal=true, firstbig=false, sub=false, no=false;
    forn(i, 95, 130){
    	if (f1[i] > f2[i]){ firstbig = true; firstequal = false;}
    	if (f1[i] < f2[i]) no = true;
    }
    if (no || s.size() < t.size()) return (cout << "need tree"), 0;
    if (firstequal) return (cout << "array"), 0;
    forn(i, 0, s.size()-t.size()){
    	bool f = true; int curr = i;
    	forn(j, 0, t.size()){
    		if (s[curr++] != t[j]) {f = false; break;}
    	}
    	if (f) {sub = true; break;}
    }
    cout << (sub ? "automaton" : "both");
}
int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    int32_t t = 1;
    // cin >> t;
    forn(i, 1, t+1){
    	// cout << "# " << i << '\n';
      	solve();
      	cout << '\n';
    }
    return 0;
}