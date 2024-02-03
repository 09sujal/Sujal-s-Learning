def star(n):
    for i in range(n):
        for j in range(i+1):
            print((chr)(i+65), end=' ')
        print()

z = 5
star(z)

#Online Compiler
# def alphaRamp(n: int) -> None:
#     for i in range(n):
#         for j in range(i+1):
#             print((chr)(i+65), end=' ')
#         print()
