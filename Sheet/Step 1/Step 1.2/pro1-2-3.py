def star(n):
    for i in range(1,n+1):
        for j in range(1,i+1):
            print(j,end='')
        print('\n', end='')

a=int(input())
star(a)

#online compiler
# def nTriangle(n:int) ->None:
#     for i in range(1,n+1):
#         for j in range(1,i+1):
#             print(j,' ',end='')
#         print('\n', end='')