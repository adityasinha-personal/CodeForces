//
//  Created by Aditya Vikram Sinha


#include <bits/stdc++.h>
using namespace std;

int main() {

    int t, a, b, c, d;
    
    cin >> t;
    
    
    string ans;
    while (t--) {
        ans = "No";
        cin >> a >> b >> c >> d;
        
        if ((a + c) == b && b == d) {
            ans = "Yes";
        } else if ((a + d) == b && b == c) {
            ans = "Yes";
        } else if ((b + c) == a && a == d) {
            ans = "Yes";
        } else if ((b + d) == a && a == c) {
            ans = "Yes";
        }
        
        cout << ans << "\n";
    }
    return 0;
}
