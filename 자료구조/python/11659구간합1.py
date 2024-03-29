import sys
input = sys.stdin.readline #표준입력에서 한줄을 읽어옴.

suNo, quizNo = map(int, input().split())
numbers = list(map(int, input().split()))

prefix_sum = [0]
temp = 0

# 합 배열 만들기
for i in numbers:
    temp = temp + i
    prefix_sum.append(temp)

for i in range(quizNo):
    s, e = map(int, input().split())
    print(prefix_sum[e] - prefix_sum[s-1])