import sys
input = sys.stdin.readline

num = int(input())
sum = int(input())

i = 0
j = num - 1
count = 0

arr = list(map(int, input().split()))

arr.sort() #정렬 알고리즘

# print (arr)

while i < j:
    if arr[i] + arr[j] < sum:
        i += 1

    elif arr[i] + arr[j] > sum:
        j -= 1
    
    else:
        count += 1
        i += 1
        j -= 1

print (count)