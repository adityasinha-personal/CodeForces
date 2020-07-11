//
//  main.cpp
//  WayTooLongWords
//
//  Created by Zomato on 11/07/20.
//  Copyright © 2020 Aditya. All rights reserved.
//

#include <bits/stdc++.h>
using namespace std;

string solve(std::string &word) {
    string result;
    int size = word.size();
    if (size > 10) {
        result =  word[0] + to_string(size - 2) + word[size - 1];
    } else {
        result = word;
    }
    return result;
}


int main() {
    vector<string> ans;
    
    int n;
    cin >> n;
    string word;
    
    while(n > 0) {
        cin >> word;
        ans.push_back(solve(word));
        n--;
    }
    
    for (int  i = 0; i < ans.size(); i++) {
        cout << ans[i] << endl;
    }
}
