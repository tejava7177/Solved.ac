# 우선순위 큐 import
from queue import PriorityQueue

# sys.stdout, sys.stdin, sys.stderr을 사용하기 위한 import
import sys


print = sys.stdout.write
input = sys.stdin.readline

N = int(input())

# 우선순위큐 선언
myQueue = PriorityQueue()

for i in range(N):
    request = int(input())

    if request != 0:
        myQueue.put((abs(request), request))

    else:
        if myQueue.empty():
            print("0\n")
        else:
            temp = myQueue.get()
            print(str(temp[1])+'\n')


