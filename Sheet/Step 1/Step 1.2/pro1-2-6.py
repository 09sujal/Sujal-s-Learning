def star(n):
    a = n
    for i in range(n):
        for j in range(1,a+1):
            print(j,' ',end='')
        print()
        a -=1
a = int(input())
star(a)

#online Compiler
# def nNumberTriangle(n: int) -> None:
#     num = n
#     for i in range(n):
#         for j in range(1, num+1):
#             print(j, end=" ")

#         # End the current row of the pattern.
#         print()

#         num -= 1