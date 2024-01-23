def star(n):
    gap=0
    star=2*n-1
    for i in range(n):
        for j in range(gap):
            print(' ',end='')
        for j in range(gap,gap+star):
            print('*',end='')
        print()     
        gap+=1
        star-=2

z = int(input())
star(z)


#Online Compiler
# def nStarTriangle(n: int) -> None:
#     gap =0
#     star = 2*n-1

#     for i in range(n):
#         for j in range(gap):
#             print(' ', end='')
#         for j in range(gap, gap + star):
#             print('*', end='')
        
#         print()
#         gap+=1
#         star-=2
