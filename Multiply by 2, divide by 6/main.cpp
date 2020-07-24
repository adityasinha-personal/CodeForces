//
//  Created by Aditya Vikram Sinha


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    int arr[t];
    
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        int ans = 0;
        while (true) {
            if (n == 1) {
                break;
            }
            if (n % 6 == 0) {
                ans++;
                n /= 6;
            } else if (n % 3 == 0) {
                ans++;
                n *= 2;
            } else {
                ans = -1;
                break;
            }
        }
        arr[i] = ans;
    }
    
    for (int i = 0; i < t; i++) {
        cout << arr[i] << "\n";
    }
    return 0;
}
