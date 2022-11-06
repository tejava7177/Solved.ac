//
//  newobject2.cpp
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
    ~Circle(){};              //소멸자
    void setRadius(int r){
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




int main(int argc, const char * argv[]) {
    
    cout << "생성하고자 하는 원의 개수?";
    int n, radius;
    cin >> n;
    if(n <= 0) return 0;
    Circle *pArray = new Circle[n];
    for(int i = 0; i<n; i++){
        cout << "원" << i+1 << ":";
        cin >> radius;
        pArray[i].setRadius(radius);
    }
    
    int count = 0;
    Circle *p = pArray;
    for(int i = 0; i<n; i++){
        cout << p->getArea() << ' ';
        if(p->getArea() >= 100 && p->getArea() <= 200)
            count++;
        p++;
    }
    cout << endl << "면적이 100에서 200 사이인 원의 개수는 " << count << endl;
    delete[]pArray;
    
    return 0;
}
