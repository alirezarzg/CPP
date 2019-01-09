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

//square class
class Square {
    public :
    int a ;
    int area (void) {
        return a*a ;
    }
    int mohit (void) ;
};
//func outside of class definition
int Square::mohit (void) {
    return a*4;
}

// main start
int main() {
    Square sq1 ;
    sq1.a = 10 ;
    cout << sq1.area() <<endl ;
    cout << sq1.mohit() << endl ;
}
