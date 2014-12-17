//
//  12-8to9.h
//  my exercise
//
//  Created by zhangyanan on 12/15/14.
//  Copyright (c) 2014 zhangyanan. All rights reserved.
//

#ifndef my_exercise__2_8to9_h
#define my_exercise__2_8to9_h



class Screen
{
public:
    
    Screen():content("this is for c++ primer"),cursor(0),height(900),width(1600){};
    
    //Screen(std::string &cont,std::string::size_type cur, std::string::size_type h, std::string::size_type w):content(cont),cursor(cur),height(h),width(w){};
    typedef std::string::size_type index;
    Screen(std::string &cont,index cur, index h, index w):content(cont),cursor(cur),height(h),width(w){};
    //char get(index h, index w) const{return (content[h*width+w]);}
    
    //overloaded function, due to different input paramenter
    char get(index, index) const;
    inline char get()const{return content[cursor];}
    Screen& set(char c){ content[cursor]=c; std::cout<<"this is set function\n"; return *this;}
    Screen& set(index h, index w, char c){content[h*width+w]=c; std::cout<<"this is set function:\n";return *this;}
    Screen& move(index h, index w){ cursor = h * width + w; std::cout<<"this is move function: cursor="<<cursor<<"\n"; return *this;}
private:
    
    std::string content;
    
    //std::string::size_type cursor;
    //std::string:size_type height, width;
    
    index cursor;
    index height, width;
};



#endif
