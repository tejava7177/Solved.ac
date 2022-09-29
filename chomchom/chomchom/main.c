//
//  main.c
//  chomchom
//
//  Created by 심주흔 on 2022/09/29.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    
    int size;
    int temp = 0;
    int* arr;
    
    scanf("%d", &size);
    
    arr = (int*)malloc(sizeof(int) * size);
    
    for(int i=0; i<size; i++){
        scanf("%d" , &arr[i]);
    }
    
    for (int i = 0; i < size; i++){
        
        for (int j = 0; j < size-1; j++){
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        
    }

    for (int i = 0; i<size; i++) {
                if (arr[i]+1 != arr[i+1]) {
                    printf("%d" , arr[i]+1);
                    return 0;
                }
    }
    
return 0;
}
