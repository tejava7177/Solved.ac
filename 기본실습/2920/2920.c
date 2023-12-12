//
//  main.c
//  2920
//
//  Created by 심주흔 on 2022/03/12.
//

#include <stdio.h>
#include <string.h>


int main(int argc, const char * argv[]) {
 
    int scale[8];
    int asc = 0;
    int desc = 0;
    int mix = 0;
    
    for(int i=0; i<8; i++){
        scanf("%d" , &scale[i]);
    }
    
    for(int i = 0; i<8; i++){
        if(scale[i] == i+1){
            asc++;
        }
        else if(scale[i] == 8 - i){
            desc++;
        }
        else
            mix++;
    }
    
    if(asc == 8){
        printf("ascending\n");
    }
    else if(desc == 8){
        printf("descending\n");
    }
    else
        printf("mixed\n");
    
    return 0;
}
