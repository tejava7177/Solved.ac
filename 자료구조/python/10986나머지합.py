import sys
input = sys.stdin.readline
n, m = map(int, input().split())
arr = list(map(int, input().split()))

sumList = [0] * n # index n 개의 배열 만들기
countList = [0] * m #나머지 index

# 합 배열의 첫번쨰 index는 원본 배열의 첫번쨰 index와 같다.
sumList[0] = arr[0]

answer = 0

# 합 배열 만들기
for i in range(1, n):
    sumList[i] = sumList[i-1] + arr[i]


for i in range(n):
    rest = sumList[i] % m

    # 합 배열에서 인덱스 값을 m으로 나눈 값이 0 이라면 증가
    if rest == 0:
        answer += 1

    countList[rest] += 1

# nCm 컴비네이션 공식 ( n * (n-1) / m! )
for i in range(m):
    if countList[i] > 1:
        answer += (countList[i] * (countList[i]-1)//2)


print(answer)