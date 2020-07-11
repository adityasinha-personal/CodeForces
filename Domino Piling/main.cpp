//
//  main.cpp
//  Domino Piling
//
//  Created by Zomato on 11/07/20.
//  Copyright © 2020 Aditya. All rights reserved.
//

#include <bits/stdc++.h>
using namespace std;


int solve(int m, int n) {
    if (m == 1) {
        return n/2;
    }
    if (n == 1) {
        return m/2;
    }
    
    return m/2 + n/2 + solve(m-1, n-1);
}


int main() {
    int m, n;
    cin >> m >> n;
    
    int ans;
    ans = solve(m, n);
    cout << ans;
}
