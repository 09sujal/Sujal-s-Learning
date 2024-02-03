def star(n):
    #pattern1
    gap1 = n-1
    star1 = 1 
    for i in range(n):
        for j in range(gap1):
            print(' ',end='')
        for j in range(gap1,gap1+star1):
            print('*',end='')
        print()
        gap1-=1
        star1+=2

    #pattern2
    gap2=0
    star2=2*n-1
    for i in range(n):
        for j in range(gap2):
            print(' ',end='')
        for j in range(gap2,gap2+star2):
            print('*',end='')
        print()     
        gap2+=1
        star2-=2

z=int(input())
star(z)


#online compiler
# def nStarDiamond(n: int) -> None:
#         #pattern1
#     gap1 = n-1
#     star1 = 1 
#     for i in range(n):
#         for j in range(gap1):
#             print(' ',end='')
#         for j in range(gap1,gap1+star1):
#             print('*',end='')
#         print()
#         gap1-=1
#         star1+=2

#     #pattern2
#     gap2=0
#     star2=2*n-1
#     for i in range(n):
#         for j in range(gap2):
#             print(' ',end='')
#         for j in range(gap2,gap2+star2):
#             print('*',end='')
#         print()     
#         gap2+=1
#         star2-=2
