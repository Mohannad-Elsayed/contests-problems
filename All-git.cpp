// A. Polo the Penguin and Segments 

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    // ios_base::sync_with_stdio(0);cin.tie(0); 
    int n, k; cin >> n >> k;
    int diff = 0;
    while(n--){
        int l, r;
        cin >> l >> r;
        diff += (r-l)+1;
    }
    cout << (((diff+k-1)/k)*k)-diff;
    return 0;
}