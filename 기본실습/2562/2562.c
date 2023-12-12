//
//  main.c
//  2562
//
//  Created by 심주흔 on 2022/03/23.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int arr[9];
    int max = 0;
    int maxI = 0;
    
    for(int i=0; i<9; i++){
        scanf("%d", &arr[i]);
        if(max <= arr[i]){
            max = arr[i];
            maxI = i;
        }
    }
    
    printf("%d\n%d\n" , max, maxI+1);
    
    return 0;
}
