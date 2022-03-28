//
//  main.c
//  1546
//
//  Created by 심주흔 on 2022/03/14.
//

#include <stdio.h>
#include <stdlib.h>

//시험 점수 변환 함수
double change(double max, double score){
    return score / max * 100;
}


int main(int argc, const char * argv[]) {
    
    int sCount;                 //과목 갯수
    int max = 0;
    double *originalScore;
    double *changeScore;
    double total = 0;
    
    scanf("%d" , &sCount);
    originalScore = (double*)malloc(sizeof(double) * sCount);
    changeScore = (double*)malloc(sizeof(double) * sCount);
    
    for(int i=0; i<sCount; i++){
        scanf("%lf" , &originalScore[i]);
        if(max <= originalScore[i]){
            max = originalScore[i];
        }
    }
    

    for(int i = 0; i<sCount; i++){
        changeScore[i] = change(max, originalScore[i]);
        total += changeScore[i];
    }
    
    printf("%lf\n" , total / sCount);
    
    return 0;
}
