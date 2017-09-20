//
//  ex8_2_3.cpp
//  DOKUSYU8
//
//  Created by susynishida on 2017/09/16.
//  Copyright © 2017年 susynishida. All rights reserved.
//

#include <iostream>

void showflags();

int main(){
    showflags();
    
    std::cout.setf(std::ios::oct | std::ios::showbase | std::ios::fixed);
    showflags();
    
    return 0;
}

void showflags(){
    std::ios::fmtflags f; //fmtflags型のインスタンスfを定義
    
    f = std::cout.flags();
    
    if(f & std::ios::skipws) // a & b ->a,bのビットが1のときtureを返す。 skipwsがon->ビット数は1
    {std::cout << "skipws on\n";}
    else
    {std::cout << "skipws off\n";}
    
    if(f & std::ios::left)
    {std::cout << "left on\n";}
    else
    {std::cout << "left off\n";}
    
    if(f & std::ios::right)
    {std::cout << "right on\n";}
    else
    {std::cout << "right off\n";}
    
    if(f & std::ios::internal)
    {std::cout << "internal on\n";}
    else
    {std::cout << "internal off\n";}
    
    if(f & std::ios::dec)
    {std::cout << "dec on\n";}
    else
    {std::cout << "dec off\n";}
    
    if(f & std::ios::oct)
    {std::cout << "oct on\n";}
    else
    {std::cout << "oct off\n";}

    if(f & std::ios::hex)
    {std::cout << "hex on\n";}
    else
    {std::cout << "hex off\n";}
    
    if(f & std::ios::showbase)
    {std::cout << "showbase on\n";}
    else
    {std::cout << "showbase off\n";}
    
    if(f & std::ios::showpoint)
    {std::cout << "showpoint on\n";}
    else
    {std::cout << "showpoint off\n";}
    
    if(f & std::ios::showpos)
    {std::cout << "showpos on\n";}
    else
    {std::cout << "showpos off\n";}
    
    if(f & std::ios::uppercase)
    {std::cout << "uppercase on\n";}
    else
    {std::cout << "uppercase off\n";}
    
    if(f & std::ios::scientific)
    {std::cout << "scientific on\n";}
    else
    {std::cout << "scientific off\n";}
    
    if(f & std::ios::fixed)
    {std::cout << "fixed on\n";}
    else
    {std::cout << "fixed off\n";}
    
    if(f & std::ios::unitbuf)
    {std::cout << "unitbuf on\n";}
    else
    {std::cout << "unitbuf off\n";}
    
    if(f & std::ios::boolalpha)
    {std::cout << "boolalpha on\n";}
    else
    {std::cout << "boolalpha off\n";}
    
    std::cout << std::endl;
}
