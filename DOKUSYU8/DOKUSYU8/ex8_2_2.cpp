//
//  ex8_2_2.cpp
//  DOKUSYU8
//
//  Created by susynishida on 2017/09/16.
//  Copyright © 2017年 susynishida. All rights reserved.
//

#include <iostream>

int main(){
    std::cout.unsetf(std::ios::dec);
    std::cout.setf(std::ios::uppercase | std::ios::showbase | std::ios::hex);
    
    std::cout << 88 << std::endl;
    std::cout.unsetf(std::ios::uppercase);
    
    std::cout << 88 << std::endl;
    
    return 0;
}
