//
//  ex8_3_2.cpp
//  DOKUSYU8
//
//  Created by susynishida on 2017/09/16.
//  Copyright © 2017年 susynishida. All rights reserved.
//

#include <iostream>
#include <cmath>

int main(){
    std::cout.precision(4);
    std::cout << "      x   sqrt(x)    x^2\n\n";
    
    for (double x =2.0; x <= 20.0; x++){
        std::cout.width(7);
        std::cout << x << "  ";
        std::cout.width(7);
        std::cout.setf(std::ios::showpoint);
        std::cout << sqrt(x) << "  ";
        std::cout.unsetf(std::ios::showpoint);
        std::cout.width(7);
        std::cout << x*x << "  ";
        std::cout << std::endl;
    }
    
    return 0;
}
