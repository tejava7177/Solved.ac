//
//  main.c
//  watermelon
//
//  Created by 심주흔 on 2022/09/27.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int user;
    char *arr[10000];
    
    scanf("%d" , &user);
    
    for(int i = 0; i<10000; i++){
        if(i%2 == 0){
            arr[i] = "수";
        }
        else
            arr[i] = "박";
    }
    
    if(user == 0){
        return 0;
    }
    
    
    for(int i = 0; i<user; i++){
        printf("%s" , arr[i]);
    }
    printf("\n");
    return 0;
}

