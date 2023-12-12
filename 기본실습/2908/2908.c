//
//  main.c
//  2908
//
//  Created by 심주흔 on 2022/04/09.
//

#include <stdio.h>

int changeNum(int a){
    
    int temp = 0;
    int result = 0;

    temp = (a % 10) * 100;
    a = a / 10;
    
    result += temp;
    
    temp = (a % 10) * 10;
    a = a / 10;
    
    result += temp;
    
    temp = (a % 10);
    
    result += temp;
    
    return result;
}

int main(int argc, const char * argv[]) {
    
    int num1, num2;
    int result1, result2;
    
    scanf("%d %d" , &num1, &num2);
    
    result1 = changeNum(num1);
    result2 = changeNum(num2);
    
    if(result1 < result2){
        printf("%d\n" , result2);
    }
    else
        printf("%d\n" , result1);
    
    return 0;
}
