#using if else statement
# def star(n):
#     star = 1
#     for i in range(n):
#         for j in range(1, star + 1):
#             if((i+j)%2==0):
#                 print('0', end=' ')
#             else:
#                 print('1', end=' ')
#         print()
#         star +=1

# z = 5
# star(z)

def star(n):
    star = 1
    for i in range(n):
        for j in range(1, star + 1):
            print((i+j)&1,end=' ')
        print()
        star +=1

z = 5
star(z)

# for online compiler
# def nBinaryTriangle(n: int) -> None:
#     star = 1
#     for i in range(n):
#         for j in range(1,star+1):
#             print((i+j)&1,end=' ')
#         print()
#         star+=1

