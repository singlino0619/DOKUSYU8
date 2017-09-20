//
//  main.cpp
//  DOKUSYU8
//
//  Created by susynishida on 2017/09/16.
//  Copyright © 2017年 susynishida. All rights reserved.
//

#include <iostream>

int main() {
    std::cout << 123.23 << " hello " << 100 << std::endl;
    std::cout << 10 << ' ' << -10 << std::endl;
    std::cout << 100.0 << std::endl << std::endl;
    
    std::cout.unsetf(std::ios::dec);
    std::cout.setf(std::ios::hex | std::ios::scientific);
    std::cout << 123.23 << " hello " << 100 << std::endl;
    
    std::cout.setf(std::ios::showpos);
    std::cout << 10 << ' ' << -10 << std::endl;
    
    std::cout.setf(std::ios::showpoint | std::ios::fixed);
    std::cout << 100.0 << std::endl;
    return 0;
}
