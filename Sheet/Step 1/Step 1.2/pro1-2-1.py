def star(n):

    if 1<=n and n<=25:
        for i in range(n):
            for j in range(n):
                print('* ',end="")
            print('\n',end="")
    
n = int(input())
star(n)


# for online compiler
# def nForest(n: int) -> None:
    
#     for row in range(n):
#         for col in range(n):
#             print('* ', end="")
#         print('\n',end="")