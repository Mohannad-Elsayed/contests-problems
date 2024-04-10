// Number of common divisors 
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int gccd(int a, int b){
    if (!b) return a;
    return gccd(b, a%b);
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    while(n--){
        int a, b; cin >> a >> b;
        a = gccd(a, b);
        int res = 0;
        for (int i = 1; i*i<=a; ++i){
            if (!(a%i)){
                res++;
                if (a/i != i) res++;
            }
        }
        cout << res << '\n';
    }
    return 0;
}