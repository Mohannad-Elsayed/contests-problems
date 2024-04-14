// A - Chewbaсca and Number

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    // ios_base::sync_with_stdio(0);cin.tie(0); 
    string s; cin >> s;
    for (int i = 0; i<s.size(); i++){
        if (!i && s[i] == '9') continue;
        s[i] = min(s[i], (char)('9'-s[i] + '0')); 
    }
    cout << s;
    return 0;
}