//
//  Created by Aditya Vikram Sinha


#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    
    cin >> n;
    
    int ans = 0;
    
    while(n) {
        if(n % 10 == 7 || n % 10 == 4) {
            ans++;
        }
        n /= 10;
    }
    
    if (ans == 4 || ans == 7) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}
