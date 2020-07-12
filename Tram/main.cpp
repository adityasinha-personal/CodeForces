//
//  Created by Aditya Vikram Sinha


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int currentMax = 0;
    int currentPas = 0;
    int a, b;
    for (int i = 1; i <= n; i++) {
        cin >> a >> b;
        currentPas = currentPas + (b - a);
        if (currentMax <= currentPas) {
            currentMax = currentPas;
        }
    }
    
    cout << currentMax;
    
    return 0;
}
