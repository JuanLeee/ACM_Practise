//
//  main.cpp
//  ACM
//
//  Created by Juan Lee on 2020-01-08.
//  Copyright © 2020 Juan Lee. All rights reserved.
//

#include <iostream>
using namespace std;


int main(int argc, const char * argv[]) {
    int x;
    std::ios::sync_with_stdio(false); std::cin.tie(nullptr);
    cin >> x;
    int input [x];
    for(int i = 0; i<x ; i++){
        cin >> input[i];
    }
    int lastp = -1;
    int readCount = 0;
    
    for(int i = 0;i<x;i++){
        //cout << "readCount" << readCount << '\n';
        //cout << "lastp" << lastp << '\n';
        
        if(lastp < input[i] - 1){
            lastp = input[i]-1;
        }
        
        if(lastp == i){
            readCount++;
        }
        else if(i-1 == x){
            readCount++;
        }
    }
    cout << readCount << '\n';
    return 0;
}


