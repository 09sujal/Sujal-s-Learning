def star(n):
    for i in  range(n):
        for j in range(i+1):
            print('* ',end='')
        print('\n', end='')

a=int(input())
star(a)

#online compiler
# def nForest(n:int) ->None:
#     for i in  range(n):
#         for j in range(i+1):
#             print('* ',end='')
#         print('\n', end='')