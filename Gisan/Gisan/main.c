//
//  main.c
//  Gisan
//
//  Created by 심주흔 on 2022/09/29.
//

#include <stdio.h>
#include <stdlib.h>


int countSize(int n){
    
    int count = 0;
    
    while(n != 0){
        n = n/10;
        ++count;
    }
    return count;
}




int main(int argc, const char * argv[]) {
    
    
    int *arrA;
    int *arrB;
    
    int A, B;
    
    int sizeA, sizeB;
    
    
   
    
    scanf("%d %d" , &A, &B);
    
    sizeA = countSize(A);
    sizeB = countSize(B);
    
    
    arrA = (int*)malloc(sizeof(int)* sizeA);
    arrB = (int*)malloc(sizeof(int)* sizeB);
    
    
    for(int i = 0; i<sizeA; i++){
        scanf("%d" , &arrA[i]);
    }
    
    for(int i = 0; i<sizeB; i++){
        scanf("%d" , &arrB[i]);
    }
    
    //printf("%d %d" , sizeA, sizeB);
    
    
    
    return 0;
}
