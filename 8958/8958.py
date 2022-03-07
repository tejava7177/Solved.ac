user = int(input())

for i in range(user):
    point  = 0
    total = 0
    score = input()
    b = list(score)

    for i in score:
        if i == 'O':
            point += 1
            total += point

        else:
            point = 0
    print(total)