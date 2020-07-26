//
//  Created by Aditya Vikram Sinha


#include <bits/stdc++.h>
using namespace std;


int leastPrime (int n) {
    int i = 3;
    while (i <= n) {
        if (n % i == 0) {
            return i;
        } else {
            i++;
        }
    }
    return -1;
}

int main() {
    
    int t, n, k;
    
    cin >> t;
    
    long long ans;
    
    while (t--) {
        ans = 0;
        cin >> n >> k;
        
        if (n % 2 == 0) {
            ans = 2 * k + n;
        } else {
            ans = n + 2 * (k - 1) + leastPrime(n);
        }
        cout << ans << "\n";
    }

    return 0;
}
