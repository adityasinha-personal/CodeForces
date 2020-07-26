//
//  Created by Aditya Vikram Sinha


#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t, n;
    
    cin >> t;
    
    while (t--) {
        cin >> n;
        
        int k = 2;
        double x;
        while (1) {
            x = n / (double)(pow(2, k) - 1);
            if (x >= 1 && x / (int)x == 1) {
                cout << (int) x << "\n";
                break;
            }
            k++;
        }
    }
    return 0;
}
