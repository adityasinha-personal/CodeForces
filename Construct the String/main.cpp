//
//  Created by Aditya Vikram Sinha


#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    
    cin >> t;
    
    while (t--) {
        int n, a, b;
        
        cin >> n >> a >> b;
        
        char arr[b];
        int c = 97;
        for (int i = 0; i < b; i++) {
            arr[i] = c;
            c++;
        }
        
        for (int i = 0; i < n; i++) {
            int ctr = 0;
            int j;
            for (j = i; j < i + a && j < n; j++) {
                if (ctr < b) {
                    cout << arr[ctr];
                    ctr++;
                } else {
                    cout << arr[b-1];
                }
            }
            i = j-1;
        }
        cout << "\n";
    }
    return 0;
}
