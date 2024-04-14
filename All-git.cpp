// A. Ksenia and Pan Scales

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    // ios_base::sync_with_stdio(0);cin.tie(0); 
    string ab, a, b, extra; cin >> ab >> extra;
    int pos = ab.find('|');
    a = ab.substr(0, pos);
    b = ab.substr(pos+1);
    for (auto ch : extra){
        if (a.size() < b.size()) a+= ch;
        else b += ch;
    }
    cout << (a.size() == b.size() ? a + '|' + b : "Impossible");
    return 0;
}