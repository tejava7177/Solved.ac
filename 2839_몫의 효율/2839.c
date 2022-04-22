//
//  main.c
//  2839
//
//  Created by 심주흔 on 2022/04/22.
//

#include <stdio.h>
 
int main() {
    int N, cnt = 0;
    scanf("%d", &N);
    
    while (1) {
        //주어진 수가 5의 배수가 되도록 유도
        if (N % 5 == 0) {
            cnt += N / 5;
            break;
        }
        
        //3의 배수로만 이루어져 있다면 정직하게 count
        N -= 3;
        cnt++;
        
        if (N <= 0) break;
    }
    //몫을 구할 수 없다면 -1 출력
    if (N < 0) printf("-1\n");
    else printf("%d\n", cnt);
}
