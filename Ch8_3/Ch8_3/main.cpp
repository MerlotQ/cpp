//
//  main.cpp
//  Ch8_3
//
//  Created by Lianfeng Hou on 2016-02-08.
//  Copyright © 2016 Lianfeng Hou. All rights reserved.
//

#include <iostream>
#include "get.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    cout << "Hello, World!\n";
    double dval;
    get(cin);
    cin>>dval;
    cout<<dval<<endl;
    return 0;
}
