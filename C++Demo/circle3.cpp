//
//  circle3.cpp
//  생성자연습
//
//  Created by 심주흔 on 2022/10/30.
//

#include <iostream>
using namespace std;

class Circle{
    int radius;
public:
    
    Circle();
    Circle(int a);
    ~Circle();              //소멸자
    double getArea();
};

Circle::Circle(){
    radius = 1;
    cout << "반지름" << radius << "인 원이다." << endl;
}

Circle::Circle(int a){
    radius = a;
    cout << "반지름" << radius << "인 원이다." << endl;
}

Circle::~Circle(){
    cout <<"반지름" << radius << "인 원 소멸" << endl;
}

double Circle::getArea(){
    return 3.14*radius*radius;
}

Circle globalDounut(1000);
Circle globalPizza(3000);

void f(){
    Circle fDount(100);
    Circle fPizza(300);
}

int main(){
    Circle mainDount;
    Circle mainPizza(30);
    f();
}
