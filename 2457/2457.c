//
//  main.c
//  2457
//
//  Created by 심주흔 on 2022/04/08.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int arr[5];
    int total = 0;
    
    for(int i = 0; i<5; i++){
        scanf("%d" , &arr[i]);
        total = total + (arr[i] * arr[i]);
    }
    
    total %= 10;
    
    printf("%d\n" , total);
    
    return 0;
}
