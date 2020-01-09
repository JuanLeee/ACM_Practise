//
//  main.cpp
//  Sept 4
//
//  Created by Juan Lee on 2019-09-04.
//  Copyright © 2019 Juan Lee. All rights reserved.
//

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int i;
    cin >> i;
    while (i>0) {
        long long j,k;
        cin >> j >> k;
        cout << j*k << endl;
        i--;
    }
    
    return 0;
}
