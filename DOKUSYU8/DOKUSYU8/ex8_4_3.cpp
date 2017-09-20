//
//  ex8_4_3.cpp
//  DOKUSYU8
//
//  Created by susynishida on 2017/09/16.
//  Copyright © 2017年 susynishida. All rights reserved.
//

#include <iostream>

int main(){
    bool b;
    bool c;
    
    std::cout << "boolalphaをセットする前: ";
    b = true;
    std::cout << b << " ";
    b = false;
    std::cout << b << std::endl;
    
    std::cout << "boolalphaをセットした後: ";
    b = true;
    std::cout << std::boolalpha << b << " ";
    b = false;
    std::cout << b << std::endl; //streamにboolalphaを設定したのでこのmain文の中ではboolalphaが適用される
    
    std::cout << "ブール値を入力: ";
    std::cin >> std::boolalpha >> b; //coutにはboolalphaを設定したが、cinには設定していない。
    std::cout << b << "を入力しました\n";
    
    return 0;
}
