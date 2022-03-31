//
//  main.c
//  10871
//
//  Created by 심주흔 on 2022/03/31.
//

#include <stdio.h>
#include <stdlib.h>
int main(int argc, const char * argv[]) {
    
    int *arr;
    int num, point;
    
    scanf("%d %d" , &num, &point);
    
    arr = (int*)malloc(sizeof(int)*num);
    
    for(int i = 0; i<num; i++){
        scanf("%d" , &arr[i]);
    }
    
    for(int i = 0; i < num; i++){
        if(point > arr[i]){
            printf("%d " , arr[i]);
        }
    }
    
    free(arr);
    return 0;
}
