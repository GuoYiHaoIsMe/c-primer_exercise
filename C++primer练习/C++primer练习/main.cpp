//
//  main.cpp
//  C++primer练习
//
//  Created by 郭益豪 on 2017/10/12.
//  Copyright © 2017年 郭益豪. All rights reserved.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    long tmp=1;
    long *p=&tmp;
    long *pp=p;
    cout<<(++*pp);
    cout<<(*pp);

    long &ppp=tmp;
    cout<<(++ppp);
    cout<<(ppp);

        std::cout << "Hello, World!\n";
    return 0;
}
