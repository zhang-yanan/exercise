//
//  main.cpp
//  my exercise
//
//  Created by zhangyanan on 12/15/14.
//  Copyright (c) 2014 zhangyanan. All rights reserved.
//  this file is used to c++ primer home work from chapter12

#include <iostream>

//#define my_exercise_12_1to4
#ifdef my_exercise_12_1to4
#include "12-1to4.h"
#endif

#define my_exercise_12_8to9
#ifdef my_exercise_12_8to9
#include "12-8to9.h"
#endif

//#define my_exercise_12_11
#ifdef my_exercise_12_11
#include "12-11.h"
#endif

#ifdef my_exercise_12_8to9

//definition of class fucntion, shall be out of other functions
inline char Screen::get(std::string::size_type h, std::string::size_type w) const
{
    index content_now = h * width + w;
    return(content[content_now]);
}
#endif

int main(int argc, const char * argv[])
{
    
#ifdef my_exercise_12_1to4
    person A("jim","beijing,china");
    
    A.get_address();
    A.get_name();
#endif
    
#ifdef my_exercise_12_8to9
    std::string s="my first log";
    Screen S(s,0, 100, 100);
    std::cout<<S.get(0,4)<<std::endl;
    //this is for *this usage
    std::cout<<S.move(0,4).set('a').get()<<"\n";
    
#endif
    
#ifdef my_exercise_12_11
    X classx(3);
    Y classy(4);
    // pointer should always be set before using it.
    classx.ylink = &classy;
    std::cout<<classx.ylink->get()<<std::endl;
    std::cout<<classy.xlink.get()<<std::endl;
#endif
    
    std::cout << "\nHello, World!\n";
    return 0;
}
