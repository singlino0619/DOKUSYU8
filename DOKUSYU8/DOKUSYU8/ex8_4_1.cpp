//
//  ex8_4_1.cpp
//  DOKUSYU8
//
//  Created by susynishida on 2017/09/16.
//  Copyright © 2017年 susynishida. All rights reserved.
//

#include <iostream>
#include <iomanip>

int main(){
    std::cout << std::hex << 100 << std::endl;
    
    std::cout << std::setfill('X') << std::setw(10);
    std::cout << 100 << "hi" << std::endl;
    
    return 0;
}
