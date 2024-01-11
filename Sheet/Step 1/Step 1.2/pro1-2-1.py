n = int(input())
n = n + 1

for i in range(1, n):
    for j in range(i):
        print('*',end="")
    print('\n',end='' )