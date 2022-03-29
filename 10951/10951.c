//
//  main.c
//  10951
//
//  Created by 심주흔 on 2022/03/29.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int num1, num2;
    
    while(scanf("%d %d" , &num1, &num2)!= EOF){
        //입력받을 정수쌍의개수와 종료 조건이 명시되어 있지 않은 경우

        printf("%d\n" , num1 + num2);
    }
    
    
    return 0;
}
