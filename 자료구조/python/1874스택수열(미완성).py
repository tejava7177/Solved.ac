n = int(input())
arr = [0] * n

for i in range(n):
    arr[i] = int(input())

stack = []
num = 1
result = True
answer = ""

for i in range(n):
    su = arr[i]
    if su >= num:
        while su >= num:
            stack.append(num)
            num += 1
            answer += "+\n"
        
        stack.pop()
        answer += "-\n"

    else:
        b = stack.pop()
        if b > su:
            print("No")
            result = False
            break
        else:
            answer += "-\n"

if result:
    print(answer)