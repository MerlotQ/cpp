//
//  get.cpp
//  Ch8_3
//
//  Created by Lianfeng Hou on 2016-02-08.
//  Copyright © 2016 Lianfeng Hou. All rights reserved.
//

#include "get.hpp"
#include <iostream>

using namespace std;
istream& get(istream& in){

    int ival;
    while (in>>ival, !in.eof()) {
        if (in.bad()) {
            throw runtime_error("IO stream corrupted");
        }
        if (in.fail()) {
            cerr<<"bad data, try again";
            
        }
    }


    return in;

}