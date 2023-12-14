# num = int(input)
# point = 0

# arr = list(map(int, input().split()))
# NGE = [0] * num
# mystack = []

# Enter를 쳐서 입력
# for i in range(num):
#     arr[i] = int(input)
    


    
num = int(input(""))
arr = list(map(int, input("").split()))

NGE = [-1] * num
mystack = []

for i in range(num):
    while mystack and arr[mystack[-1]] < arr[i]:
        NGE[mystack.pop()] = arr[i]

    mystack.append(i)

# 결과 출력
# print("각 원소에 대한 오른쪽에 있는 더 큰 수:")
# for i in range(num):
#     print(f"{arr[i]}: {NGE[i]}")
print(" ".join(map(str, NGE)))