#include <iostream>
#include <string>
using namespace std;

int main(){
    cout << "주소를 입력하세요:";

    char address[100];
    string singer;

    cin.getline(address, 100, '\n');
    getline(cin, singer);


    cout <<"주소는" << address <<"입니다." << endl;
    cout << singer << endl;
}