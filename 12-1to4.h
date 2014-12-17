//
//  12-1to4.h
//  my exercise
//
//  Created by zhangyanan on 12/15/14.
//  Copyright (c) 2014 zhangyanan. All rights reserved.
//  this file is used to declare class
#include "string"
//header guard to keep this head file only be called one time in a main.cpp file
#ifndef my_exercise__2_1to4_h
#define my_exercise__2_1to4_h
class person
{
public:
    person():name("lilei"),address("6420 schmidt lane"){};
    person(std::string na, std::string addr):name(na),address(addr){};
    void get_name()const{std::cout<<name<<std::endl;}
    void get_address()const{std::cout<<address<<std::endl;}
private:
    std::string name, address;
};


#endif
