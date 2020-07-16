//
//  Created by Aditya Vikram Sinha


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a;
    
    cin >> n >> a;
    
    while (a > 0) {
        if (n % 10 == 0) {
            n /= 10;
        } else {
            n -= 1;
        }
        a--;
    }
    
    cout << n;
    return 0;
}
