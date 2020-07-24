//
//  Created by Aditya Vikram Sinha


#include <bits/stdc++.h>
using namespace std;

long long solve(long long a, long long b, long long c, long long d) {
    long long ans = 0;
    if (a <= b) {
        ans = b;
    } else if (a > b && c <= d) {
        ans = -1;
    } else {
        long long multiplier = ceil((double)(a - b)/(c - d));
        ans = b + multiplier * c;
    }
    return ans;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        long long ans = 0;
        long long a, b, c, d;
        
        cin >> a >> b >> c >> d;
        
        ans = solve(a, b, c, d);
        cout << ans << "\n";
    }
    return 0;
}
