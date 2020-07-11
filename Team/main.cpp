//
//  main.cpp
//  Team
//
//  Created by Zomato on 11/07/20.
//  Copyright © 2020 Aditya. All rights reserved.
//

#include <bits/stdc++.h>
using namespace std;

int solve(int a, int b, int c) {
    int wilSolve = 0;
    
    if (a + b + c >= 2) {
        wilSolve = 1;
    }
    
    return wilSolve;
}

int main() {
    int t;
    cin >> t;
    int a, b, c;

    int ans = 0;
    while (t > 0) {
        cin >> a >> b >> c;
        ans += solve(a, b, c);
        t--;
    }
    
    cout << ans;
}
