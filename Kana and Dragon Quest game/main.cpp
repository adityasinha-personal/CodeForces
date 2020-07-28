//
//  Created by Aditya Vikram Sinha


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    
    cin >> t;
    
    while (t--) {
        int x, n, m;
        
        cin >> x >> n >> m;
        
        string ans = "NO";
        while (n--) {
            if (x > 20) {
                x = x/2 + 10;
            } else {
                break;
            }
        }
        
        if ((x - m * 10) <= 0) {
            ans = "YES";
        }
        
        cout << ans << "\n";
    }
    return 0;
}
