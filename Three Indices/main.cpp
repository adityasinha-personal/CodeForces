//
//  Created by Aditya Vikram Sinha


#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        int i, k;
        int ans = 0;
        for (int j = 1; j < n - 1; j++) {
            i = j - 1;
            k = j + 1;
            if (arr[i] < arr[j] && arr[j] > arr[k]) {
                ans = 1;
                cout << "YES" << "\n";
                cout << i+1 << " " << j+1 << " " << k+1 << "\n";
                break;
            }
        }
        if (ans == 0) {
            cout << "NO" << "\n";
        }
    }
    
    return 0;
}
