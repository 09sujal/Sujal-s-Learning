def star(n):
    a = n-1
    b = 1 
    for i in range(n):
        for j in range(a):
            print(' ',end='')
        for j in range(a,a+b    ):
            print('*',end='')
        print()
        a-=1
        b+=2

z=int(input())
star(z)

#online compiler
# def star(n):
#     gap = n-1
#     star = 1

#     for i in range(n):
#         for j in range(gap):
#             print(' ',end='')
#         for j in range(gap,star+gap):
#             print('*',end='')
#         print()
#         gap-=1
#         star+=2



