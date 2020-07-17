//
//  Created by Aditya Vikram Sinha


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    
    cin >> n;
    int ans = 0;
    
    int p, q;
    while (n--) {
        cin >> p >> q;
        
        if (q - p >= 2) {
            ans++;
        }
    }
    
    cout << ans;
    return 0;
}
