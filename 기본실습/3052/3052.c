//
//  main.c
//  3052
//
//  Created by 심주흔 on 2022/04/13.
//

#include <stdio.h>

//삽입 정렬 알고리즘
void insertion(int list[], int n){
    int i, j, key;
    for(i = 1; i<n; i++){
        key = list[i];
        for(j = i - 1; j>= 0 && list[j]>key; j--)
            list[j + 1] = list[j];
        list[j + 1] = key;
    }
}

int main(int argc, const char * argv[]) {
    
    int num;
    int rest[10];
    int count = 1;
    
    for(int i = 0; i<10; i++){
        scanf("%d" , &num);
        rest[i] = num % 42;
    }
    
    insertion(rest, 10);
    
    for(int i = 0; i<9; i++){
        if(rest[i] != rest[i+1])
            count++;
    }
    
    printf("%d\n" , count);
    
    return 0;
}
