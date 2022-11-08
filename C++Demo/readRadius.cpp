//
//  readRadius.cpp
//  address
//
//  Created by 심주흔 on 2022/11/08.
//

//키보드로부터 반지름 값을 읽어 Circle 객체에 반지름을 설정하느 readRadius() 함수를 작성하라.

#include <iostream>
using namespace std;

class Circle{
    int radius;
public:
    Circle() {radius = 1;}
    Circle(int radius) {this->radius = radius;}
    void setRadius(int radius){this->radius = radius;}
    double getArea() {return 3.14*radius*radius;}
};

void readRadius(Circle &d){
    int radius;
    cout << "면적을 입력하세요";
    cin >> radius;
    d.setRadius(radius);
}

int main(){
    Circle donut;
    readRadius(donut);
    cout << "donut의 면적 = " << donut.getArea() << endl;
    return 0;
}
