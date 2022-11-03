//
//  main.cpp
//  heap
//
//  Created by 심주흔 on 2022/11/03.
//

#include <iostream>
using namespace std;


int main(int argc, const char * argv[]) {
   
    int *p = new int;           //동적 할당
    int *p2 = new int [5];      //크기가 5인 정수형 배열의 동적 할당
    
    if(!p){
        cout << "메모리를 할다ㅇ받을 수 없습니다." << endl;
        return 0;
    }
    
    *p = 5;
    int n = *p;
    cout << "*p = " << *p << endl;
    cout << " n = " << n << endl;
    
    for (int i = 0; i < 5; i++){
        p[i] = i;               //배열에 순서대로 0 ~ 4를 기록한다.
    }
    
    
    
    delete p;                   //배열 메모리 반납
    delete [] p2;               //배열 메모리 반환
            
    return 0;
}
