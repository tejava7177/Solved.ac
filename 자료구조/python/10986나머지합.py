import sys
input = sys.stdin.readline
n, m = map(int, input().split())
arr = list(map(int, input().split()))

sumList = [0] * n # index n 개의 배열 만들기
countList = [0] * m 

sumList[0] = arr[0]

answer = 0

# 합 배열 만들기
for i in range(1, n):
    sumList[i] = sumList[i-1] + arr[i]


for i in range(n):
    rest = sumList[i] % m

    if rest == 0:
        answer += 1

    countList[rest] += 1

for i in range(m):
    if countList[i] > 1:
        answer += (countList[i] * (countList[i]-1)//2)


print(answer)