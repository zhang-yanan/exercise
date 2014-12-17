//
//  12-11.h
//  my exercise
//
//  Created by zhangyanan on 12/15/14.
//  Copyright (c) 2014 zhangyanan. All rights reserved.
//

#ifndef my_exercise__2_11_h
#define my_exercise__2_11_h
class Y;

class X
{
public:
    X():num(1){};
    X(int a):num(a){};
    Y *ylink;
    int get(){std::cout<<"this is from class X:\n";return num;}
    
private:
    int num;
};

class Y
{
public:
    Y():num(2){};
    Y(int a):num(a),xlink(5){};
    X xlink;
    int get(){std::cout<<"this is from class Y:\n"; return num;}
    
private:
    int num;
};


#endif
