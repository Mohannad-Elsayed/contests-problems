// F. Interesting Function
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void slv(){
    ll l, r, resl = 0, resr = 0; cin >> l >> r;
   for (int i = 0; i < 11; i++){
    resl += (l/(ll)pow(10, i));
    resr += (r/(ll)pow(10, i));
    // l /= 10;
    // cout << resl << '\n';
   }
    cout << resr-resl;
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n = 1; 
    cin >> n;
    for (int i = 1; i<=n; i++){
        slv();
        cout << '\n';
    }
    return 0;
}
/*
4
1 9
9 10
10 20
1 1000000000

8
2
11
1111111110

*/