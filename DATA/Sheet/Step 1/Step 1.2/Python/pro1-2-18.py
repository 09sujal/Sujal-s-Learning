def star(n):
    for row in range(n):
        for col in range(row+1):
            print(chr(n-col+64),end= ' ')
        print()

z = 5
star(z)

# online compiler

# def alphaTriangle(n: int):
#     for row in range(n):
#         for col in range(row+1):
#             print(chr(n-col+64),end= ' ')
#         print()