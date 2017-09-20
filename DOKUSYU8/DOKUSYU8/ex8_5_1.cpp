//
//  ex8_5_1.cpp
//  DOKUSYU8
//
//  Created by susynishida on 2017/09/20.
//  Copyright © 2017年 susynishida. All rights reserved.
//

#include <iostream>

class coord{
    int x;
    int y;
public:
    coord();
    coord(int i, int j);
    friend std::ostream &operator<<(std::ostream &stream, coord ob);
};

coord::coord(){
    x = 0;
    y = 0;
}

coord::coord(int i, int j){
    x = i;
    y = j;
}

std::ostream &operator<<(std::ostream &stream, coord ob){
    stream << ob.x << "," << ob.y << std::endl;
    return stream;
}

int main(){
    coord a(1,1);
    coord b(10,23);
    std::cout << a << b;
    
    return 0;
}
