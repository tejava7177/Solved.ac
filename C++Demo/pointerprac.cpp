//
//  pointerprac.cpp
//  생성자연습
//
//  Created by 심주흔 on 2022/10/31.
//

#include <iostream>
using namespace std;

class Circle{
    int radius;
public:
    Circle(){radius = 1;}
    Circle(int r){radius = r;}
    
    ~Circle(){}
    double getArea();
    void setRadius(int r){
        radius = r;
    }
};

double Circle::getArea(){
    return 3.14*radius*radius;
}

int main(){
    /*
    Circle donut;
    Circle pizza(30);
    
    Circle *p = &donut; //객체 포인터 생성
    cout << "Area is " << p->getArea() << endl;
    
    Circle *p2 = &pizza;
    cout << "Area is " <<p2->getArea() << endl;
    */
    
    //배열
    Circle coin[3];
    
    coin[0].setRadius(10);
    coin[1].setRadius(20);
    coin[2].setRadius(30);
    
    for(int i = 0; i<3; i++){
        cout << "Circle" << i << " area is" << coin[i].getArea() << endl;
    }
    
    Circle *p3 = coin;
    for(int i = 0; i<3; i++){
        cout << "Circle" << i << " area is" << p3->getArea() << endl;
        p3++; //p는 배열의 다음 원소를 가리킴
    }
    
    
    
    return 0;
}
