//
//  main.cpp
//  CPPTest
//
//  Created by Alireza on 10/18/1397 AP.
//  Copyright © 1397 Alireza. All rights reserved.
//

#include <iostream>
#define Pi 3.14

using namespace std ;

int main() {
    int a , b , c , d ;
    float e1 , e2 ;
    string str ;
    
    cin >> a >> b ; // without using the STD namesapce -> std :: cin >> a >> b ; *** also b = cin.get() ; == cin >> b ;
    c = a++ * b++ ;
    d = a++ * ++b ;
    cout << "c: " << c << endl << "d: " << d << "\n" /* equals endl */ ;
    
    //use of #define
    cout << "a * Pi: " << a * Pi << endl ;
    
    // the way we cast our variables type in c++
    e1 = (a + b + c) / d ;
    cout << "e1 = (a + b + c) / d = " << e1 << endl ;
    e2 = static_cast<float>(a + b + c) / d ;
    cout << "e2 = static_cast<float>(a + b + c) / d = " << e2 << endl ;
    
    //use string
    cout <<  "enter a name: " << endl ;
    cin >> str ;
    cout << "you entered: " << str << endl ;
    
    /*    cin.ignore() ; // could be replaced with -> cin.get() ;
     cin.get() ; // (in WindowsOS)used to keep the terminal window still open after program ending . */
    return 0 ;
}
