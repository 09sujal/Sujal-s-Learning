def star(n):
    star=1
    for i in range(n):
        for j in range(star):
            print('*',end='')
        print()
        star+=1
    star = n-1
    for i in range(n):
        for j in range(star):
            print('*',end='')
        print()
        star-=1

z = int(input())
star(z)


#online Compiler
# def nStarTriangle(n: int) -> None:
#     star = 1
#     for i in range(n):
#         for i in range(star):
#             print("*", end='')
#         print()
#         star=star+1
#     star = n-1
#     for i in range(n):
#         for i in range(star):
#             print("*", end='')
#         print()
#         star=star-1