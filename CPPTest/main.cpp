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

//overloading operators
int operator + (Rectangle const &obj1 , Rectangle const &obj2){
    return (obj1.a + obj1.b) * obj2.a ;
}
// main start
int main() {
    Rectangle obj1 , obj2 ;
    cin>>obj1.a>>obj1.b>>obj2.a>>obj2.b ;
    cout<< obj1 + obj2 ;
}
