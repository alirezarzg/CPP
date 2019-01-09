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
    Square(); //it should be here to manually build a constructor ; *****
    int a , b;
    int area (void) {
        return a*a ;
    }
    int mohit (void) ;
};

//constructor of Square class
Square :: Square()
{
    b = 10;
    cout << "the object got buid , if you see this it means that an object is getting built from Square class"<<endl;
}
//func outside of class definition
int Square::mohit (void) {
    return a*4;
}

int multiply (int x , int y){
    return x*y ;
}

// main start
int main() {
    cout << "multiply " << multiply(12, 2) <<endl ;
    Square sq1 ;
    sq1.a = 10 ;
    cout << sq1.area() <<endl ;
    cout << sq1.mohit() << endl ;
    cout << sq1.a * sq1.b << " it is a test for squares constructor" << endl ;
}
