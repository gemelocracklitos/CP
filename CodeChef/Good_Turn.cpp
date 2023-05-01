#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while(tt--) {
        int a,b;
        cin >> a >> b;
        if(a + b > 6) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}