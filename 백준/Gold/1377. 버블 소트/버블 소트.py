import sys
t = int(input())
before = []
after = []
big = []

for i in range(t):
    before.append([int(sys.stdin.readline().rstrip()),i])
    

after = sorted(before)

for j in range(t):
    big.append(after[j][1]-before[j][1])

print(max(big)+1)