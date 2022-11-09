//
//  main.cpp
//  new객체
//
//  Created by 심주흔 on 2022/11/06.
//



#include <iostream>
using namespace std;


class Circle{
    int radius;
public:
    Circle();               //기본 생성자
    Circle(int r);          //매개변수가 있는 생성자
    ~Circle();              //소멸자
    void setArea(int r){
        radius = r;
    }
    double getArea(){
        return 3.14 * radius * radius;
    }
};

Circle::Circle(){
    radius = 1;
    cout << "생성자 실행 radius = " << radius << endl;
}

Circle::Circle(int r){
    radius = r;
    cout << "생성자 실행 radius = " << radius << endl;
}

Circle::~Circle(){
    cout << "소멸자 실행 radius = " << radius << endl;
}

int main(int argc, const char * argv[]) {
    
    int radius;
    while(true){
        cout << "정수 반지름 입력(음수이면 종료)>>";
        cin >> radius;
        if(radius < 0 ) break;          //음수가 되어 종료한다.
        Circle *p = new Circle(radius);     //동적 객체 생성
        cout << "원의 면적은" << p->getArea() << endl;
        delete p;                       //객체 반환
    }

    return 0;
}

