//
//  Created by Aditya Vikram Sinha


#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    
    while (t--) {
        int n, a, b, c, d;
        string ans = "Yes";
        
        cin >> n >> a >> b >> c >> d;
        
        int wt1 = n * (a - b);
        int wt2 = n * (a + b);
        
        if (wt1 > (c + d) || wt2 < (c - d)) {
            ans = "No";
        }
        
        cout << ans << "\n";
    }
    
    return 0;
}
