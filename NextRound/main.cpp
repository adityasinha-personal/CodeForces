//
//  main.cpp
//  NextRound
//
//  Created by Zomato on 11/07/20.
//  Copyright © 2020 Aditya. All rights reserved.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    
    cin >> n >> k;
    
    int scores[n];
    
    int ans = 0;
    
    for(int i = 0; i < n; i++) {
        cin >> scores[i];
    }
    
    int kScore = scores[k-1];
    
    if (kScore == 0) {
        for (int i = k-2; i >= 0; i--) {
            if (scores[i] != 0) {
                ans += i+1;
                break;
            }
        }
    } else {
        ans = k;
        for (int i = k; i < n; i++) {
            if (scores[i] == kScore) {
                ans += 1;
            }
        }
    }
    
    cout << ans;
}
