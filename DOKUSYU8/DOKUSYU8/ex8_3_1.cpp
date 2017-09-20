//
//  ex8_3_1.cpp
//  DOKUSYU8
//
//  Created by susynishida on 2017/09/16.
//  Copyright © 2017年 susynishida. All rights reserved.
//

#include <iostream>

int main(){
    std::cout.width(10);
    std::cout << "hello" << std::endl;
    
    std::cout.fill('%');
    std::cout.width(10);
    std::cout << "hello" << std::endl;
    
    std::cout.setf(std::ios::left);
    std::cout.width(10);
    std::cout << "hello" << std::endl;
    
    std::cout.width(10);
    std::cout.precision(10);
    std::cout << 123.234567 << std::endl;
    std::cout.width(10);
    std::cout.precision(6);
    std::cout << 123.234567 << std::endl;
    
    return 0;
}
