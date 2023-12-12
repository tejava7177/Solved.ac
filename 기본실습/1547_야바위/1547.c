//
//  main.c
//  1547
//
//  Created by 심주흔 on 2022/05/12.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int loop;
    //int a=1, b=2, c=3;
    int temp1 = 0, temp2 = 0;
    int ball = 1;
    
    scanf("%d" , &loop);
    
    for(int i = 0; i < loop; i++){
        scanf("%d %d", &temp1, &temp2);
        if(temp1 == ball){
            ball = temp2;
        }
        else if(temp2 == ball){
            ball = temp1;
        }
    }
    printf("%d\n" , ball);
    return 0;
}
