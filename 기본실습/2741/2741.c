//
//  main.c
//  2741
//
//  Created by 심주흔 on 2022/03/07.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
   
    int num;
    scanf("%d" , &num);
    
    if(0 <= num && num <= pow(10, 5)){
        for(int i=0; i<num; i++){
            printf("%d\n" , i+1);
        }
    }
    
    return 0;
}
