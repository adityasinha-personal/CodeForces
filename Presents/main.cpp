//
//  Created by Aditya Vikram Sinha


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    int num;
    
    for (int i = 0; i < n; i++) {
        cin >> num;
        arr[num - 1] = i;
    }
    
    for (int i = 0; i < n; i++) {
        if (i == n - 1) {
            cout << arr[i] + 1;
        } else {
            cout << arr[i] + 1 << " ";
        }
    }
    
    return 0;
}
