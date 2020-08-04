//
//  Created by Aditya Vikram Sinha


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int x, y, n;
        
        cin >> x >> y >> n;
        
        int ans = 0;
        
        int div1 = n/x;
        
        int num1 = y + (div1 - 1) * x;
        if (num1 % x == y) {
            ans = num1;
        }
        
        int num2 = y + (div1) * x;
        if (num2 <= n) {
            ans = num2;
        }
        
        cout << ans << "\n";
    }
    return 0;
}
