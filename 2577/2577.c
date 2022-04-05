//
//  main.c
//  2577
//
//  Created by 심주흔 on 2022/04/05.
//


#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a, b , c;
    int arr[10] = {0};
    int temp = 0;
    //int count = 0;
    int result;
    
    scanf("%d %d %d" , &a, &b, &c);
    result = a * b * c;
    
    while(result != 0){
        temp = result % 10;
        arr[temp]++;
        
        result /= 10;
    }
    
    for(int i = 0; i<10; i++){
        printf("%d\n" , arr[i]);
    }
    
    
    return 0;
}
