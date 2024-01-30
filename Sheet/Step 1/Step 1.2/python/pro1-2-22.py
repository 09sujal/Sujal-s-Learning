def star(n):
    k=2*n-1

    for row in range(k):
        for col in range(k):
            x = abs(row-n+1)
            y = abs(col-n+1)
            print(max(x,y)+1,end='')
        print()

z = 5
star(z)

# online compiler

# def getNumberPattern(n: int):
#     k=2*n-1

#     for row in range(k):
#         for col in range(k):
#             x = abs(row-n+1)
#             y = abs(col-n+1)
#             print(max(x,y)+1,end='')
#         print()
