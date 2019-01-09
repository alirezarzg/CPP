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
class Rectangle {
    public :
    int a ;
    int b ;
//    Rectangle(); //constructor
//    ~Rectangle(); //destructor
    int masahat (void) {
        return a*b ;
    }
    int mohit (void){
        return a ;
    }
};

class Square : public Rectangle {
    public :
    int opper(void){
        return masahat()*b;
    }
};

//overloading operators
int operator + (Rectangle const &obj1 , Rectangle const &obj2){ //const &obj1 -> means the first obj made of Rectangle class (no1 doesnt matter it could be even obj10 but would be known as the first obj for compiler because of the place it is at .
    return (obj1.a + obj1.b) * obj2.a ;
}
// main start
int main() {
    Square sq1 ,sq2 ;
    sq1.a = 2 ;
    sq1.b = 3;
    sq2.a = 4;
    cout<< sq1.opper() ;
}
